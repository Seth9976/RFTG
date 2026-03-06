// 函数名称: sub_502ae0
// 虚拟地址: 0x502ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_502ae0(void* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: char** var_8 = arg3
    char** var_8 = arg3
    int32_t var_8_1 = 0
    int32_t* edi_1
    
    if (arg1 != 0)
        edi_1 = *(arg1 + 4)
    
    if (arg1 == 0 || edi_1 == 0)
    label_502b26:
        sub_4c42b0(arg3, &data_83f3d3)
    else
        while (true)
            int32_t* ebx_1 = *edi_1
            char* const eax = *ebx_1
            edi_1 = edi_1[1]
            
            if (eax == 0)
                eax = &data_83f3d3
            
            if (sub_5a9697(eax, "importSourcePath") == 0)
                char* ebx_2 = ebx_1[1]
                *arg3 = ebx_2
                
                if (ebx_2 == 0 || *ebx_2 == 0)
                    break
                
                void* eax_4 = sub_4c4060(arg3)
                *(eax_4 + 4) += 1
                return arg3
            
            if (edi_1 == 0)
                goto label_502b26
    
    return arg3
}
