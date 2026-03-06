// 函数名称: sub_661190
// 虚拟地址: 0x661190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_661190(char* arg1, char* arg2)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    sub_666750(arg1, arg2)
    
    while (true)
        uint32_t eax_1 = sub_667a40(arg1)
        int32_t edi_1 = *(arg1 + 0x100)
        
        if (edi_1 == 0x49444154)
            int32_t eax_2 = *(arg1 + 0x6c)
            
            if ((eax_2.b & 8) != 0)
                *(arg1 + 0x6c) = eax_2 | 0x2000
        else if (edi_1 == 0x49484452)
            sub_667c10(arg1, arg2, eax_1)
            continue
        else if (edi_1 == 0x49454e44)
            uint32_t var_14_5 = eax_1
            sub_667fa0(arg1, arg2)
            continue
        
        uint32_t eax_4
        int32_t ecx_1
        int32_t edx_1
        eax_4, ecx_1, edx_1 = sub_662810(arg1, edi_1)
        
        if (eax_4 != 0)
            if (edi_1 == 0x49444154)
                *(arg1 + 0x6c) |= 4
            
            sub_66a720(arg1, arg2, eax_1)
            
            if (edi_1 != 0x504c5445)
                if (edi_1 == 0x49444154)
                    char* eax = *(arg1 + 0x6c)
                    
                    if ((eax.b & 1) == 0)
                        sub_664320(arg1, "Missing IHDR before IDAT")
                        noreturn
                    
                    if (arg1[0x13b] != 3 || (eax.b & 2) != 0)
                        break
                    
                    sub_664320(arg1, "Missing PLTE before IDAT")
                    noreturn
            else
                *(arg1 + 0x6c) |= 2
        else if (edi_1 != 0x504c5445)
            if (edi_1 == 0x49444154)
                int32_t eax_13 = *(arg1 + 0x6c)
                
                if ((eax_13.b & 1) == 0)
                    sub_664320(arg1, "Missing IHDR before IDAT")
                    noreturn
                
                if (arg1[0x13b] == 3 && (eax_13.b & 2) == 0)
                    sub_664320(arg1, "Missing PLTE before IDAT")
                    noreturn
                
                *(arg1 + 0x120) = eax_1
                *(arg1 + 0x6c) = eax_13 | 4
                break
            
            char* var_14_7 = eax_1
            
            if (edi_1 == 0x624b4744)
                sub_669430(arg1, arg2, var_14_7)
            else if (edi_1 == 0x6348524d)
                sub_668320(arg1, arg2, var_14_7)
            else if (edi_1 == 0x67414d41)
                sub_667ff0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x68495354)
                sub_669660(arg1, arg2, var_14_7)
            else if (edi_1 == 0x6f464673)
                sub_669930(arg1, arg2, var_14_7)
            else if (edi_1 == 0x7043414c)
                sub_669aa0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x7343414c)
                sub_669db0(eax_4, edx_1, arg2, arg1, arg2)
            else if (edi_1 == 0x70485973)
                sub_6697f0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x73424954)
                sub_6681c0(arg2, edx_1, ecx_1, arg1, arg2, var_14_7)
            else if (edi_1 == 0x73524742)
                sub_6689d0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x69434350)
                sub_668c40(arg1, arg2, var_14_7)
            else if (edi_1 == 0x73504c54)
                sub_668f00(arg1, arg2, var_14_7)
            else if (edi_1 == 0x74455874)
                sub_66a0e0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x74494d45)
                sub_669fc0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x74524e53)
                sub_6691e0(arg1, arg2, var_14_7)
            else if (edi_1 == 0x7a545874)
                void* ecx_8 = arg2
                sub_66a2a0(eax_4, edx_1, ecx_8, arg1, ecx_8, var_14_7)
            else if (edi_1 != 0x69545874)
                sub_66a720(arg1, arg2, var_14_7)
            else
                sub_66a4a0(arg1, arg2, var_14_7)
        else
            sub_667dc0(arg1, arg2, eax_1)
}
