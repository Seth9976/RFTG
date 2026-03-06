// 函数名称: sub_50edc0
// 虚拟地址: 0x50edc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_50edc0(int32_t arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693c1a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg2 + 0x484
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        esi = arg4 + 8
    
    float var_60
    __builtin_memcpy(&var_60, esi, 0x24)
    float var_88
    __builtin_memcpy(&var_88, &var_60, 0x24)
    float var_a8
    float var_7c
    float* eax_4 = sub_465b90(&var_a8, &var_7c)
    int32_t edx_1 = eax_4[1]
    float var_84 = *eax_4
    float var_48
    var_88 = fconvert.s(fconvert.t(var_48))
    int32_t var_80 = edx_1
    float edx_2 = eax_4[3]
    float eax_5 = var_60
    var_7c = eax_4[2]
    float var_5c
    float ecx_2 = var_5c
    float var_78 = edx_2
    float var_58[0x4]
    float edx_3 = var_58[0]
    __builtin_memcpy(&var_5c, &var_88, 0x20)
    int32_t edx_4 = sub_405f60(&var_88, arg2 + 0x3c)
    __builtin_memcpy(&var_5c, &var_88, 0x20)
    int32_t eax_6 = *(arg4 + 0x98)
    
    if (eax_6 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x539, "FabLightDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    float var_90
    float var_28
    float var_24
    
    switch (eax_6)
        case 0
            sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x536, "FabLightDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 1
            int32_t esi_2 = *arg3
            
            if (esi_2 s< 4)
                sub_405900(&var_a8, edx_4, &var_58)
                var_24 = var_a8
                *arg3 = esi_2 + 1
                void* var_cc_1 = arg4 + 0x9c
                int32_t var_a4
                int32_t var_20_3 = var_a4
                float* var_a0
                float* var_1c_3 = var_a0
                sub_4ddb00(esi_2, var_a0)
            
            if (*(data_27e7fd0 + 0x35) != 0)
                sub_4dad50()
                long double x87_r7_2 = fconvert.t(0.5f)
                float var_20_4 = fconvert.s(x87_r7_2)
                float var_1c_4 = fconvert.s(x87_r7_2)
                *(data_27e7fe4 + 0x254) = 0
                var_90 = var_20_4
                float var_8c_2 = var_1c_4
                sub_405e30(&var_78, &var_90, &data_840a00)
                var_28 = var_78
                float edx_16 = ecx_2
                var_24 = eax_5
                float var_20_5 = edx_16
                float var_1c_5 = edx_3
                
                if ((data_3165a78 & 2) == 0)
                    data_3165a78.d |= 2
                    int32_t var_8_3 = 1
                    char** eax_19
                    eax_19, edx_16 = sub_509140(3, "sys/editor/light.texture")
                    data_3165a70 = eax_19
                    int32_t var_8_4 = 0xffffffff
                
                sub_4d9aa0(&data_84076c, edx_16, &var_28, data_3165a70, &data_be4aac, nullptr)
                *(data_27e7fe4 + 0x254) = 0
                sub_4dae60()
                
                if ((data_3165a78 & 4) == 0)
                    data_3165a78.d |= 4
                    int32_t var_8_5 = 2
                    data_3165a6c = sub_509140(2, "sys/editor/arrow_widget.structure")
                    int32_t var_8_6 = 0xffffffff
                
                long double x87_r7_3 = fconvert.t(0.5f)
                var_28 = fconvert.s(x87_r7_3)
                var_24 = fconvert.s(x87_r7_3)
                float var_20_6 = fconvert.s(x87_r7_3)
                float var_98 = var_28
                float var_94_1 = var_24
                float var_8c_3 = fconvert.s(float.t(1))
                var_90 = var_20_6
                sub_4dd970(&var_98)
                long double x87_r7_6 = fconvert.t(var_5c) * fconvert.t(0.5)
                float var_38
                __builtin_memcpy(&var_38, &var_5c, 0x20)
                var_38 = fconvert.s(x87_r7_6)
                sub_4e0760(data_3165a6c)
                sub_4dd970(&data_840b64)
            
            goto label_50efbe
        case 2
            sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x533, "FabLightDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 3
            data_27e8468 = *(arg4 + 0xac)
            data_27e846c = *(arg4 + 0x9c)
            data_27e8470 = *(arg4 + 0xa0)
            void* edx_6 = data_27e7fd0
            data_27e8474 = *(arg4 + 0xa4)
            data_27e8478 = *(arg4 + 0xa8)
            
            if (*(edx_6 + 0x35) != 0)
                sub_4dad50()
                long double x87_r7_1 = fconvert.t(0.5f)
                float var_20_1 = fconvert.s(x87_r7_1)
                float var_1c_1 = fconvert.s(x87_r7_1)
                *(data_27e7fe4 + 0x254) = 0
                var_90 = var_20_1
                float var_8c_1 = var_1c_1
                float var_b8
                sub_405e30(&var_b8, &var_90, &data_840a00)
                var_28 = var_b8
                float var_b4
                var_24 = var_b4
                int32_t var_ac
                int32_t edx_10 = var_ac
                int32_t var_b0
                int32_t var_20_2 = var_b0
                int32_t var_1c_2 = edx_10
                
                if ((data_3165a78 & 1) == 0)
                    data_3165a78.d |= 1
                    int32_t var_8_1 = 0
                    char** eax_11
                    eax_11, edx_10 = sub_509140(3, "sys/editor/env_probe.texture")
                    data_3165a74 = eax_11
                    int32_t var_8_2 = 0xffffffff
                
                sub_4d9aa0(&data_84076c, edx_10, &var_28, data_3165a74, &data_be4aac, nullptr)
                *(data_27e7fe4 + 0x254) = 0
                sub_4dae60()
            
        label_50efbe:
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_5a6aba(eax_2 ^ &__saved_ebp)
            return 
}
