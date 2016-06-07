#!/usr/bin/env python
import re
from sys import argv
filename = "gettext-ios-demo-swift/gettext-ios-demo-swift/AppDelegate.swift"


def extract_strings(filename):
    txt = open(filename)
    print "Searching in file %r:" % filename
    result_singular = re.findall(regex_translate(), txt.read())
    result_plural = re.findall(regex_translate_plural(), txt.read())
    return result_singular, result_plural

def po_file_header():
    header = [
        '\"Project-Id-Version: PACKAGE VERSION\\n\"',
        '\"Report-Msgid-Bugs-To: \\n\"',
        "\"POT-Creation-Date: 2016-06-01 10:52+0200\\n\"",
        "\"PO-Revision-Date: YEAR-MO-DA HO:MI+ZONE\\n\"",
        "\"Last-Translator: FULL NAME <EMAIL@ADDRESS>\\n\"",
        "\"Language-Team: LANGUAGE <LL@li.org>\\n\"",
        "\"Language: de\\n\"",
        "\"MIME-Version: 1.0\\n\"",
        "\"Content-Type: text/plain; charset=CHARSET\\n\"",
        "\"Content-Transfer-Encoding: 8bit\\n\"\n"
    ]
    return '\n'.join(header)

def regex_nslocalizedstring():
    return 'NSLocalizedString\(\"([^[\"]*)\",\s?comment:\s?\"[^[\"]*\"\)'

def regex_translate():
    return 'translate_\([\s\t\n\r]*(\".+\")[\s\t\n\r]*\)'

def regex_translate_plural():
    return 'translate_n\([\s\t\n\r]*\"(.+?)\",[\s\t\n\r]*\"(.+?)\"[\s\t\n\r]*,[\s\t\n\r]*[\w|\d]*[\s\t\n\r]*\)'


def po_file_ids_strings_singular(results):
    lines = []
    for r in results:
        lines.append("msgid \"{}\"\nmsgstr \"\"\n".format(r))
    return lines

def po_file_ids_strings_plural(results):
    lines = []
    for r in results:
        lines.append("msgid \"{}\"\nmsgstr \"\"\n".format(r))
    return lines

result_singular, result_plural = extract_strings(filename)
print("singular results: "+ str(result_singular))
print("plural results: "+str(result_plural))
f = open('swift.po', 'w+')
po_file_lines_s = po_file_ids_strings_singular(result_singular)
po_file_lines_p = po_file_ids_strings_plural(result_plural)
f.write(po_file_header())
for line in po_file_lines_s:
    f.write(line)
