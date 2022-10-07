#ifndef PROTOCOL_JSON_PRINTER_H
#define PROTOCOL_JSON_PRINTER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#include "flatcc/flatcc_json_printer.h"
#include "flatcc/flatcc_prologue.h"


static void AzureIoTSecurity_Protocol_print_json_enum(flatcc_json_printer_t *ctx, int8_t v)
{

    switch (v) {
    case 0: flatcc_json_printer_enum(ctx, "TCP", 3); break;
    case 1: flatcc_json_printer_enum(ctx, "UDP", 3); break;
    case 2: flatcc_json_printer_enum(ctx, "ICMP", 4); break;
    default: flatcc_json_printer_int8(ctx, v); break;
    }
}

#include "flatcc/flatcc_epilogue.h"
#endif /* PROTOCOL_JSON_PRINTER_H */