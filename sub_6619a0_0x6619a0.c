// 函数名称: sub_6619a0
// 虚拟地址: 0x6619a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6619a0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    sub_667b40(arg1, 0)
    
    if (arg1[0x13b] == 3 && *(arg1 + 0x130) s> zx.d(*(arg1 + 0x12c)))
        sub_664350(arg1, "Read palette index exceeding num_palette")
    
    do
        uint32_t eax_2 = sub_667a40(arg1)
        int32_t edi_1 = *(arg1 + 0x100)
        
        if (edi_1 == 0x49484452)
            sub_667c10(arg1, arg2, eax_2)
        else if (edi_1 != 0x49454e44)
            uint32_t eax_3
            void* ecx_2
            int32_t edx_2
            eax_3, ecx_2, edx_2 = sub_662810(arg1, edi_1)
            
            if (eax_3 != 0)
                if (edi_1 == 0x49444154 && (eax_2 != 0 || (*(arg1 + 0x6c) & 0x2000) != 0))
                    sub_664350(arg1, "Too many IDATs found")
                
                sub_66a720(arg1, arg2, eax_2)
                
                if (edi_1 == 0x504c5445)
                    *(arg1 + 0x6c) |= 2
            else if (edi_1 == 0x49444154)
                if (eax_2 != 0 || (*(arg1 + 0x6c) & 0x2000) != 0)
                    sub_664350(arg1, "Too many IDATs found")
                
                sub_667b40(arg1, eax_2)
            else if (edi_1 != 0x504c5445)
                char* var_14_8 = eax_2
                
                if (edi_1 == 0x624b4744)
                    sub_669430(arg1, arg2, var_14_8)
                else if (edi_1 == 0x6348524d)
                    sub_668320(arg1, arg2, var_14_8)
                else if (edi_1 == 0x67414d41)
                    sub_667ff0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x68495354)
                    sub_669660(arg1, arg2, var_14_8)
                else if (edi_1 == 0x6f464673)
                    sub_669930(arg1, arg2, var_14_8)
                else if (edi_1 == 0x7043414c)
                    sub_669aa0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x7343414c)
                    char* edx_5 = arg2
                    sub_669db0(eax_3, edx_5, ecx_2, arg1, edx_5)
                else if (edi_1 == 0x70485973)
                    sub_6697f0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x73424954)
                    sub_6681c0(eax_3, edx_2, arg2, arg1, arg2, var_14_8)
                else if (edi_1 == 0x73524742)
                    sub_6689d0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x69434350)
                    sub_668c40(arg1, arg2, var_14_8)
                else if (edi_1 == 0x73504c54)
                    sub_668f00(arg1, arg2, var_14_8)
                else if (edi_1 == 0x74455874)
                    sub_66a0e0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x74494d45)
                    sub_669fc0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x74524e53)
                    sub_6691e0(arg1, arg2, var_14_8)
                else if (edi_1 == 0x7a545874)
                    sub_66a2a0(eax_3, arg2, ecx_2, arg1, arg2, var_14_8)
                else if (edi_1 != 0x69545874)
                    sub_66a720(arg1, arg2, var_14_8)
                else
                    sub_66a4a0(arg1, arg2, var_14_8)
            else
                sub_667dc0(arg1, arg2, eax_2)
        else
            uint32_t var_14_3 = eax_2
            sub_667fa0(arg1, arg2)
    while ((arg1[0x6c] & 0x10) == 0)
}
