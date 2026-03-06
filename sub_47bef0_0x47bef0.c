// 函数名称: sub_47bef0
// 虚拟地址: 0x47bef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_47bef0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_6c = arg1
    int32_t result_1 = 0
    int32_t result
    float var_68[0x7]
    float var_4c
    int32_t var_48
    int32_t var_44
    int32_t var_40
    int32_t var_3c
    int32_t var_38
    int32_t var_34
    int32_t var_30
    int32_t var_2c
    
    if (data_26a45e0 == 1 || data_26a45e4 == 1)
        float* eax_12 = sub_477b10()
        bool cond:0_1 = data_26a45e0 != 1
        __builtin_memcpy(&var_4c, eax_12, 0x20)
        var_2c = var_48
        int32_t var_20_2 = var_3c
        int32_t var_28_2 = var_44
        int32_t var_24_2 = var_40
        int32_t var_14_2 = var_30
        int32_t var_1c_2 = var_38
        int32_t* edx_7 = var_6c
        int32_t var_18_2 = var_34
        __builtin_memcpy(&var_68, &var_2c, 0x1c)
        
        if (cond:0_1)
            result = result_1
        else
            *edx_7 = 2
            float* eax_15 = sub_5087d0(&var_4c, &var_68)
            edx_7 = var_6c
            __builtin_memcpy(&var_2c, eax_15, 0x1c)
            result = 1
            __builtin_memcpy(&edx_7[0x221c], &var_2c, 0x1c)
            edx_7[2] = 0
            result_1 = 1
        
        if (data_26a45e4 == 1)
            void* eax_17 = result * 0x88a0 + edx_7
            var_6c = eax_17
            *eax_17 = 2
            float* eax_18 = sub_5087d0(&var_4c, &var_68)
            int32_t* eax_19 = var_6c
            __builtin_memcpy(&var_68, eax_18, 0x1c)
            eax_19[2] = 1
            result = result_1 + 1
            __builtin_memcpy(&eax_19[0x221c], &var_68, 0x1c)
    else
        void* eax_3
        
        if (*(data_27e7fd0 + 0x27) != 0)
            eax_3 = sub_4c98a0()
        
        if (*(data_27e7fd0 + 0x27) != 0 && ((*(eax_3 + 0x3c) & 0x200) != 0 || data_27e7bc1 != 0))
            __builtin_memcpy(&var_4c, sub_477b10(), 0x20)
            var_2c = var_48
            int32_t var_20 = var_3c
            int32_t var_28 = var_44
            int32_t var_24 = var_40
            int32_t var_14 = var_30
            int32_t var_1c = var_38
            int32_t* edx_2 = var_6c
            int32_t var_18 = var_34
            __builtin_memcpy(&var_68, &var_2c, 0x1c)
            *edx_2 = 1
            void var_94
            int32_t eax_7
            int80_t st0_1
            st0_1, eax_7 = sub_508430(&var_94)
            __builtin_memcpy(&var_2c, eax_7, 0x1c)
            __builtin_memcpy(&var_68, sub_5087d0(&var_4c, &var_68), 0x1c)
            result = 1
            __builtin_memcpy(&var_6c[0x221c], &var_68, 0x1c)
        else
            *arg1 = 0
            int32_t ecx_4 = data_30929bc
            int32_t edx_3 = data_30929c0
            var_2c = data_30929b8
            int32_t var_20_1 = data_30929c4
            int32_t var_28_1 = ecx_4
            int32_t var_24_1 = edx_3
            int32_t var_14_1 = data_30929d0
            int32_t var_1c_1 = data_30929c8
            int32_t var_18_1 = data_30929cc
            result = 1
            __builtin_memcpy(&arg1[0x221c], &var_2c, 0x1c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
