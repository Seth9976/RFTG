// 函数名称: sub_5d2f30
// 虚拟地址: 0x5d2f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d2f30(int32_t arg1)
{
    // 第一条实际指令: data_bf7818 = 0
    data_bf7818 = 0
    int32_t esi
    
    if (arg1 s<= 0x8878001e)
        if (arg1 != 0x8878001e)
            if (arg1 s> 0x8007000e)
                if (arg1 == 0x80070057)
                    data_bf7c18 = "Invalid parameter"
                    goto label_5d3041
                
                if (arg1 != 0x8878000a)
                    goto label_5d3019
                
                data_bf7c18 = "Audio device in use"
                goto label_5d3041
            
            if (arg1 == 0x8007000e)
                data_bf7c18 = "Out of memory"
                goto label_5d3041
            
            if (arg1 == 0x80004001)
                data_bf7c18 = "Function not supported"
                goto label_5d3041
            
            if (arg1 != 0x80004002)
                goto label_5d3019
            
            data_bf7c18 = "Unsupported interface -- Is DirectX 8.0 or later installed?"
            goto label_5d3041
        
        data_bf7c18 = "Control requested is not available"
    label_5d3041:
        int32_t var_4_2 = data_bf7c18
        int32_t var_8_2 = esi
        sub_5ce6a0(&data_bf7818, 0x400, "%s: %s")
    else if (arg1 + 0x7787ffce u> 0x64)
    label_5d3019:
        int32_t var_4_1 = arg1
        int32_t var_8_1 = esi
        sub_5ce6a0(&data_bf7818, 0x400, "%s: Unknown DirectSound error: 0x%x")
        
        if (data_bf7818 == 0)
            goto label_5d3041
    else
        switch (arg1)
            case 0x88780032
                data_bf7c18 = "Invalid call for the current state"
                goto label_5d3041
            case 0x88780033, 0x88780034, 0x88780035, 0x88780036, 0x88780037, 0x88780038, 0x88780039, 
                    0x8878003a, 0x8878003b, 0x8878003c, 0x8878003d, 0x8878003e, 0x8878003f, 0x88780040, 
                    0x88780041, 0x88780042, 0x88780043, 0x88780044, 0x88780045, 0x88780047, 0x88780048, 
                    0x88780049, 0x8878004a, 0x8878004b, 0x8878004c, 0x8878004d, 0x8878004e, 0x8878004f, 
                    0x88780050, 0x88780051, 0x88780052, 0x88780053, 0x88780054, 0x88780055, 0x88780056, 
                    0x88780057, 0x88780058, 0x88780059, 0x8878005a, 0x8878005b, 0x8878005c, 0x8878005d, 
                    0x8878005e, 0x8878005f, 0x88780060, 0x88780061, 0x88780062, 0x88780063, 0x88780065, 
                    0x88780066, 0x88780067, 0x88780068, 0x88780069, 0x8878006a, 0x8878006b, 0x8878006c, 
                    0x8878006d, 0x8878006e, 0x8878006f, 0x88780070, 0x88780071, 0x88780072, 0x88780073, 
                    0x88780074, 0x88780075, 0x88780076, 0x88780077, 0x88780079, 0x8878007a, 0x8878007b, 
                    0x8878007c, 0x8878007d, 0x8878007e, 0x8878007f, 0x88780080, 0x88780081, 0x88780082, 
                    0x88780083, 0x88780084, 0x88780085, 0x88780086, 0x88780087, 0x88780088, 0x88780089, 
                    0x8878008a, 0x8878008b, 0x8878008c, 0x8878008d, 0x8878008e, 0x8878008f, 0x88780090, 
                    0x88780091, 0x88780092, 0x88780093, 0x88780094, 0x88780095
                goto label_5d3019
            case 0x88780046
                data_bf7c18 = "Caller doesn't have priority"
                goto label_5d3041
            case 0x88780064
                data_bf7c18 = "Unsupported audio format"
                goto label_5d3041
            case 0x88780078
                data_bf7c18 = "No audio device found"
                goto label_5d3041
            case 0x88780096
                data_bf7c18 = "Mixing buffer was lost"
                goto label_5d3041
    char* var_4_3 = &data_bf7818
    sub_5cce60("%s")
    return 0xffffffff
}
