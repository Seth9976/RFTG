// 函数名称: sub_5d8af0
// 虚拟地址: 0x5d8af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d8af0(int16_t arg1, int16_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t var_184 = 0x1a
    int32_t var_184 = 0x1a
    int32_t var_188 = 0
    int32_t var_24
    int32_t* var_18c = &var_24
    sub_5cd100()
    int32_t var_12 = 0
    var_24 = 0xffff0001
    int32_t var_18 = 0xc00848
    int16_t var_e = arg1
    int16_t var_c = arg2
    sub_5d8930(&var_c, &var_e)
    int32_t var_190 = 0x10
    int32_t var_194 = 1
    int32_t* result
    int32_t edx_1
    result, edx_1 = sub_5d0ad0()
    
    if (result != 0)
        int32_t* var_184_1 = &var_24
        int32_t eax_1
        int32_t edx_2
        eax_1, edx_2 = sub_5d8880(result, 0x1a, edx_1)
        
        if (eax_1 != 0)
            uint32_t var_8
            int32_t* var_184_2 = &var_8
            var_8 = 0
            int32_t eax_4
            int32_t edx_3
            eax_4, edx_3 = sub_5d8880(result, 2, edx_2)
            
            if (eax_4 != 0)
                int32_t* var_184_3 = &var_8
                int32_t eax_6
                int32_t* edx_4
                eax_6, edx_4 = sub_5d8880(result, 2, edx_3)
                
                if (eax_6 != 0)
                    int32_t* result_1 = result
                    
                    if (sub_5d88c0(arg3, edx_4) != 0)
                        int32_t pvParam = 0x154
                        SystemParametersInfoA(SPI_GETNONCLIENTMETRICS, 0, &pvParam, 0)
                        HDC eax_9 = GetDC(nullptr)
                        int32_t var_60
                        var_8 =
                            zx.d((divs.dp.d(sx.q(var_60 * 0xffffffb8), GetDeviceCaps(eax_9, 0x5a))).w)
                        uint32_t* var_184_5 = &var_8
                        int32_t eax_16
                        int32_t edx_8
                        eax_16, edx_8 = sub_5d8880(result, 2, ReleaseDC(nullptr, eax_9))
                        
                        if (eax_16 != 0)
                            uint32_t* var_184_6 = &var_8
                            int16_t var_50
                            var_8 = zx.d(var_50)
                            int32_t eax_18
                            int32_t edx_9
                            eax_18, edx_9 = sub_5d8880(result, 2, edx_8)
                            
                            if (eax_18 != 0)
                                char var_4c
                                eax_18.b = var_4c
                                char arg_7 = eax_18.b
                                char* var_184_7 = &arg_7
                                int32_t eax_20
                                int32_t edx_10
                                eax_20, edx_10 = sub_5d8880(result, 1, edx_9)
                                
                                if (eax_20 != 0)
                                    char var_49
                                    edx_10.b = var_49
                                    char* var_184_8 = &arg_7
                                    arg_7 = edx_10.b
                                    int32_t eax_22
                                    int32_t* edx_11
                                    eax_22, edx_11 = sub_5d8880(result, 1, edx_10)
                                    
                                    if (eax_22 != 0)
                                        int32_t* result_2 = result
                                        void var_44
                                        
                                        if (sub_5d88c0(&var_44, edx_11) != 0)
                                            return result
        
        sub_5d8ad0(result)
    
    return 0
}
