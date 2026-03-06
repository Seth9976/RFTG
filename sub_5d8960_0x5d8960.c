// 函数名称: sub_5d8960
// 虚拟地址: 0x5d8960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d8960(int32_t* arg1, int32_t arg2, int32_t arg3, int16_t arg4, int16_t arg5, int16_t arg6, int16_t arg7, int32_t arg8, char* arg9)
{
    // 第一条实际指令: int32_t var_34 = 0x18
    int32_t var_34 = 0x18
    int32_t var_38 = 0
    void var_24
    void* var_3c = &var_24
    int32_t var_8 = 0xffff
    int32_t var_c = 0
    sub_5cd100()
    int32_t var_1c = arg2
    int32_t ecx
    ecx.w = arg5
    int32_t var_20 = arg3
    int32_t edx
    edx.w = arg6
    int16_t var_18 = arg4
    int16_t var_16 = ecx.w
    int16_t var_14 = edx.w
    int16_t var_12 = arg7
    int32_t var_10 = arg8
    sub_5d8930(&var_16, &var_18)
    int32_t var_40 = 4
    int32_t eax_2
    int32_t edx_2
    eax_2, edx_2 = sub_5d8850(arg1, sub_5d8930(&var_12, &var_14))
    
    if (eax_2 != 0)
        void* var_34_1 = &var_24
        int32_t eax_5
        int32_t edx_3
        eax_5, edx_3 = sub_5d8880(arg1, 0x18, edx_2)
        
        if (eax_5 != 0)
            int32_t* var_34_2 = &var_8
            int32_t eax_7
            int32_t edx_4
            eax_7, edx_4 = sub_5d8880(arg1, 2, edx_3)
            
            if (eax_7 != 0)
                void arg_8
                void* var_34_3 = &arg_8
                int32_t eax_9
                int32_t* edx_5
                eax_9, edx_5 = sub_5d8880(arg1, 2, edx_4)
                
                if (eax_9 != 0)
                    int32_t* var_34_4 = arg1
                    int16_t* eax_11
                    int32_t edx_6
                    eax_11, edx_6 = sub_5d88c0(arg9, edx_5)
                    
                    if (eax_11 != 0)
                        int32_t* var_34_5 = &var_c
                        
                        if (sub_5d8880(arg1, 2, edx_6) != 0)
                            void* ebx_1 = *arg1
                            *(ebx_1 + 0x10) += 1
                            return 1
    
    return 0
}
