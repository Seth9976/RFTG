// 函数名称: sub_553050
// 虚拟地址: 0x553050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_553050(int32_t* arg1 @ esi, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: char* eax_1
    char* eax_1
    int32_t edx
    eax_1, edx = sub_550b50(arg1)
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    char eax_3
    void* edx_1
    
    if (&eax_1[0xffffffff] u<= 5)
        switch (eax_1)
            case 1
                eax_3, edx_1 = sub_5a61c0(&eax_1[0xffffffff], &var_18, arg1, &var_18)
                goto label_5530cf
            case 2
                eax_3, edx_1 = sub_595590(&var_18, edx, arg1, &var_18)
                goto label_5530cf
            case 3
                eax_3, edx_1 = sub_5a68d0()
                goto label_5530cf
            case 5
                eax_3, edx_1 = sub_594b80(&var_18, arg1)
                goto label_5530cf
            case 6
                eax_3, edx_1 = sub_593f90(&var_18, arg1)
            label_5530cf:
                
                if (eax_3 == 0)
                    return 0
                
                int32_t var_8
                
                if (var_8 != 1 && var_8 != 4)
                    edx_1 = sub_5549e0(&var_18)
                
                int32_t eax_7 = *arg2
                
                if (eax_7 == 8)
                    char* var_24_6 = eax_1
                    int32_t* var_28_3 = arg1
                    sub_552070(arg3, edx_1, arg2, arg2, &var_18)
                    int32_t eax_9
                    eax_9.b = 1
                    return eax_9
                
                if (eax_7 != 0)
                    if (eax_7 != 6)
                        int32_t eax_12 = var_18
                        
                        if (eax_12 != 0)
                            _aligned_free_base(eax_12)
                        
                        int32_t* var_24_9 = arg1
                        sub_4c5680("texture encoding not supported %s")
                        int32_t eax_13
                        eax_13.b = 1
                        return eax_13
                else if (eax_1 == 2)
                    char* var_24_7 = eax_1
                    int32_t* var_28_4 = arg1
                    sub_552070(arg3, edx_1, arg2, arg2, &var_18)
                    int32_t eax_11
                    eax_11.b = 1
                    return eax_11
                
                int32_t eax_14
                int80_t st0
                st0, eax_14 = sub_552c70(eax_7, arg3, arg2, &var_18, arg1)
                eax_14.b = 1
                return eax_14
    sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x59e, "sTextureImportFromFile")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
