// 函数名称: sub_438d50
// 虚拟地址: 0x438d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_438d50(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi = arg1[1]
    int32_t edi = arg1[1]
    int32_t eax
    
    if (edi != 0xffffffff)
        eax = sub_46b360(edi)
    else
        eax = arg1 | edi
    
    int32_t ecx = *arg1
    int32_t eax_3
    int32_t ecx_4
    
    if (ecx == 0x26)
    label_438d98:
        int32_t* entry_result
        
        switch (*(ecx + sub_438ebc))
            case 0
                int32_t esi_1
                
                if (eax != 0xffffffff)
                    esi_1 = *sub_46b2b0(eax)
                else
                    esi_1 = arg1 | eax
                
                int32_t ecx_2 = data_315fba4
                *entry_result = esi_1
                entry_result[1] = 9
                data_315fba4 = ecx_2 + 1
                entry_result[2] = ecx_2
                return entry_result
            case 1
                eax_3 = 0xffffffff
                ecx_4 = 0xa
            label_438de2:
                int32_t edx_4 = data_315fba4
                *entry_result = eax_3
                entry_result[1] = ecx_4
                entry_result[2] = edx_4
                data_315fba4 = edx_4 + 1
                return entry_result
            case 2
            label_438dff:
                
                if (eax != 0xffffffff)
                    eax_3 = *sub_46b2b0(eax)
                    ecx_4 = 8
                    goto label_438de2
                
                sub_4c5870("who != -1", &data_83f3d3, "..\code\RFTGClient.cpp", 0x324c, 
                    "ActionDisplayLoc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        return 
    
    if (ecx u> 0x27)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2d6b, "IsDisplayAction")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (ecx)
        case 0, 3, 4, 5, 0xd, 0xe, 0xf, 0x11, 0x13, 0x14, 0x15, 0x16, 0x1e, 0x23, 0x25
            if (eax == *(data_27e7a40 + 0x74))
                goto label_438e46
            
            if (ecx u> 0x26)
                goto label_438dff
            
            goto label_438d98
        case 1, 2, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0x10, 0x12, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 
            0x1f, 0x20, 0x21, 0x22, 0x24, 0x27
        label_438e46:
            eax_3 = 0xffffffff
            ecx_4 = 0xffffffff
            goto label_438de2
}
