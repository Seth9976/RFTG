// 函数名称: sub_53bc60
// 虚拟地址: 0x53bc60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_53bc60(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f8e7
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_198 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* param0 = 0x103
    char* param0_9 = nullptr
    char var_120 = 0
    int128_t var_11f[0x10]
    sub_5abfc0(&var_11f, param0_9.b, param0)
    char* const var_12c = &data_83f3d3
    param0 = 0x58
    param0_9 = nullptr
    int32_t var_8_1 = 0
    int32_t var_188
    int32_t* param0_2 = sub_5abfc0(&var_188, param0_9.b, param0)
    int32_t* param0_10
    int32_t* var_124
    int32_t** eax_6
    
    if (arg3 == 0)
        param0 = param0_2
        int32_t* param0_3 = *(data_3079208 + 0x20)
        var_124 = &param0
        param0 = param0_3
        
        if (param0_3 != 0 && *param0_3 != 0)
            void* eax_8 = sub_4c4060(&param0)
            *(eax_8 + 4) += 1
        
        param0_9 = &param0_10
        int32_t edx_2 = sub_51fd90(param0_9)
        var_8_1.b = 1
        char* param0_13 = param0_10
        
        if (param0_13 == 0)
            param0_13 = &data_83f3d3
        
        param0 = &var_124
        param0 = sub_51ece0(&var_124, edx_2, param0_13, param0)
        var_8_1.b = 2
        sub_4c4510(param0)
        var_8_1.b = 1
        int32_t* eax_11 = var_124
        
        if (eax_11 != 0 && *eax_11 != 0)
            int32_t* eax_13 = sub_4c4060(&var_124)
            int32_t temp0_1 = eax_13[1]
            eax_13[1] -= 1
            
            if (temp0_1 == 1)
                int32_t* param0_4 = eax_13[3] + 0x10
                int32_t* eax_14 = sub_4f4380(param0_4)
                param0 = param0_4
                sub_4f4430(eax_13, eax_14, param0)
        
        char* const eax_16 = var_12c
        
        if (eax_16 == 0)
            eax_16 = &data_83f3d3
        
        char* const var_15c_1 = eax_16
        var_8_1.b = 0
        int32_t* param0_11 = param0_10
        
        if (param0_11 != 0 && *param0_11 != 0)
            eax_6 = &param0_10
            goto label_53be13
    else
        char* param0_14 = *(arg3 + 0x20)
        param0 = *(arg3 + 4)
        param0_9 = param0_2
        var_124 = &param0_9
        param0_9 = param0_14
        
        if (param0_14 != 0 && *param0_14 != 0)
            void* eax_4 = sub_4c4060(&param0_9)
            *(eax_4 + 4) += 1
        
        sub_51f6d0(&var_124, param0_9)
        int32_t* esi_1 = var_124
        char* const eax_5 = &data_83f3d3
        
        if (esi_1 != 0)
            eax_5 = esi_1
        
        char* edx_1 = &var_120 - eax_5
        char i
        
        do
            i = *eax_5
            *(edx_1 + eax_5) = i
            eax_5 = &eax_5[1]
        while (i != 0)
        
        if (esi_1 != 0 && *esi_1 != i)
            eax_6 = &var_124
        label_53be13:
            void* eax_17 = sub_4c4060(eax_6)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t* param0_5 = *(eax_17 + 0xc) + 0x10
                int32_t* eax_18 = sub_4f4380(param0_5)
                param0 = param0_5
                sub_4f4430(eax_17, eax_18, param0)
    int32_t ecx_2 = data_3078818
    char** result = nullptr
    var_188 = 0x58
    int32_t var_184 = ecx_2
    char* var_16c = &var_120
    int32_t var_168 = 0x104
    char const* const var_17c = "Image (*.jpg, *.png)"
    int32_t var_170 = 0
    int32_t var_164 = 0
    int32_t var_160 = 0
    char const* const var_158 = "Pick Image File"
    int32_t var_154 = 0x2001808
    
    if (arg4 == 8 || arg4 == 9)
        char const* const var_17c_4 = "Structure (*.fbx)"
    else if (arg4 == 0xb)
        char const* const var_17c_1 = "Material (*.materialFn.xml)"
    else if (arg4 == 0xa)
        char const* const var_17c_2 = "Material (*.material.xml)"
    else if (arg4 == 0x4c)
        char const* const var_17c_3 = "Particle (*.particle)"
    
    param0 = &var_188
    
    if (GetOpenFileNameA(param0) != 0)
        int32_t eax_22 = sub_4c42b0(&var_124, &var_120)
        var_8_1.b = 3
        int32_t* esi_5 = var_124
        char* const ecx_3 = &data_83f3d3
        
        if (esi_5 != 0)
            ecx_3 = esi_5
        
        param0 = &param0_10
        sub_51ee80(eax_22, &param0_10, ecx_3, param0)
        var_8_1.b = 4
        int32_t* param0_1 = param0_10
        
        if (param0_1 == 0)
            param0_1 = &data_83f3d3
        
        param0 = param0_1
        result = sub_543700(param0)
        var_8_1.b = 3
        int32_t* param0_12 = param0_10
        
        if (param0_12 != 0 && *param0_12 != 0)
            void* eax_25 = sub_4c4060(&param0_10)
            int32_t temp3_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t* param0_6 = *(eax_25 + 0xc) + 0x10
                int32_t* eax_26 = sub_4f4380(param0_6)
                param0 = param0_6
                sub_4f4430(eax_25, eax_26, param0)
                esi_5 = var_124
        
        var_8_1.b = 0
        
        if (esi_5 != 0 && *esi_5 != 0)
            int32_t* eax_29 = sub_4c4060(&var_124)
            int32_t temp4_1 = eax_29[1]
            eax_29[1] -= 1
            
            if (temp4_1 == 1)
                int32_t* param0_7 = eax_29[3] + 0x10
                int32_t* eax_30 = sub_4f4380(param0_7)
                param0 = param0_7
                sub_4f4430(eax_29, eax_30, param0)
    
    int32_t var_8_2 = 0xffffffff
    char* const eax_32 = var_12c
    
    if (eax_32 != 0 && *eax_32 != 0)
        void* eax_34 = sub_4c4060(&var_12c)
        int32_t temp2_1 = *(eax_34 + 4)
        *(eax_34 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t* param0_8 = *(eax_34 + 0xc) + 0x10
            int32_t* eax_35 = sub_4f4380(param0_8)
            param0 = param0_8
            sub_4f4430(eax_34, eax_35, param0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
