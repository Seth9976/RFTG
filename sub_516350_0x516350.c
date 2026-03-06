// 函数名称: sub_516350
// 虚拟地址: 0x516350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_516350(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ff28
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_4 = *arg3
    char** var_28
    char** esi
    
    if (eax_4 != 0)
        if (eax_4[1] != 2)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_28 = eax_4
        esi = eax_4
    else
        esi = sub_50a390(2)
        var_28 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_6 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    void* result = **eax_6
    void* result_1 = result
    
    if (arg3[5] s<= 0)
        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, "c:\ax2010\engine\xArray.h", 0xb5, 
            "XArray<struct Mat4>::operator []")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = *(result + 8)
    int32_t edi_1 = arg3[4]
    int32_t var_7c = ecx
    void* result_2 = nullptr
    
    if (ecx s> 0)
        int32_t var_24_1 = 0
        int32_t var_20_1 = edi_1
        void* ebx_2 = arg4 + 0x24
        
        while (true)
            long double x87_r7_1 = fconvert.t(*(ebx_2 - 0x18))
            long double x87_r6_1 = fconvert.t(*(ebx_2 - 0x24))
            void* edi_3 = *(result + 0xc) + var_24_1
            long double x87_r5_1 = fconvert.t(*(ebx_2 - 0x20))
            int32_t var_3bc_3 = ecx
            long double x87_r4_1 = fconvert.t(*(ebx_2 - 0x1c))
            long double x87_r6_5 = fconvert.t(fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(
                x87_r7_1 * x87_r7_1 + x87_r6_1 * x87_r6_1 + x87_r5_1 * x87_r5_1
                + x87_r4_1 * x87_r4_1))))))
            float var_94_1 = fconvert.s(fconvert.t(*(ebx_2 - 0x18)) / x87_r6_5)
            float var_9c_1 = fconvert.s(fconvert.t(*(ebx_2 - 0x20)) / x87_r6_5)
            long double x87_r7_11 = fconvert.t(*(ebx_2 - 0x1c)) / x87_r6_5
            *(ebx_2 - 0x24) = fconvert.s(fconvert.t(*(ebx_2 - 0x24)) / x87_r6_5)
            *(ebx_2 - 0x20) = var_9c_1
            *(ebx_2 - 0x1c) = fconvert.s(x87_r7_11)
            *(ebx_2 - 0x18) = var_94_1
            int32_t edi_4 = *(edi_3 + 0x6c)
            
            if (edi_4 s>= result_2)
                sub_4c5870("pStructBone->parentBoneIndex < i", &data_83f3d3, "Animation.cpp", 0x2b0, 
                    "AnimationCalcFinalPosition")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_1
            float var_70
            
            if (edi_4 != 0xffffffff)
                void* edi_5 = edi_4 * 0x2c
                void* eax_11 = edi_5 + arg4
                
                if (*(edi_5 + arg4 + 0x28) == 0)
                    var_70 = fconvert.s(fconvert.t(*(ebx_2 - 8)))
                    long double x87_r7_13 = float.t(0)
                    float var_6c_1 = fconvert.s(x87_r7_13)
                    float var_68_1 = fconvert.s(x87_r7_13)
                    float var_64_1 = fconvert.s(x87_r7_13)
                    float var_60_1 = fconvert.s(x87_r7_13)
                    float var_5c_1 = fconvert.s(fconvert.t(*(ebx_2 - 4)))
                    float var_58_1 = fconvert.s(x87_r7_13)
                    float var_54_1 = fconvert.s(x87_r7_13)
                    float var_50_1 = fconvert.s(x87_r7_13)
                    float var_4c_1 = fconvert.s(x87_r7_13)
                    float var_48_1 = fconvert.s(fconvert.t(*ebx_2))
                    float var_44_1 = fconvert.s(x87_r7_13)
                    float var_40_1 = fconvert.s(x87_r7_13)
                    float var_3c_1 = fconvert.s(x87_r7_13)
                    float var_38_1 = fconvert.s(x87_r7_13)
                    float var_34_1 = fconvert.s(float.t(1))
                    float var_1a8[0x10]
                    __builtin_memcpy(&var_1a8, &var_70, 0x40)
                    float var_3a8[0x10]
                    sub_4062a0(&var_3a8, arg4, ebx_2 - 0x24)
                    *(eax_11 + 0x1c)
                    long double x87_r6_13 = float.t(1)
                    float var_268[0x10]
                    __builtin_memcpy(&var_268, &var_3a8, 0x40)
                    float var_8c_1 = fconvert.s(x87_r6_13 / fconvert.t(*(eax_11 + 0x20)))
                    float var_88_1 = fconvert.s(x87_r6_13 / fconvert.t(*(eax_11 + 0x24)))
                    var_70 = fconvert.s(fconvert.t(fconvert.s(x87_r6_13 / x87_r6_13)))
                    long double x87_r7_20 = float.t(0)
                    float var_6c_2 = fconvert.s(x87_r7_20)
                    float var_68_2 = fconvert.s(x87_r7_20)
                    float var_64_2 = fconvert.s(x87_r7_20)
                    float var_60_2 = fconvert.s(x87_r7_20)
                    float var_5c_2 = fconvert.s(fconvert.t(var_8c_1))
                    float var_58_2 = fconvert.s(x87_r7_20)
                    float var_54_2 = fconvert.s(x87_r7_20)
                    float var_50_2 = fconvert.s(x87_r7_20)
                    float var_4c_2 = fconvert.s(x87_r7_20)
                    float var_48_2 = fconvert.s(fconvert.t(var_88_1))
                    float var_44_2 = fconvert.s(x87_r7_20)
                    float var_40_2 = fconvert.s(x87_r7_20)
                    float var_3c_2 = fconvert.s(x87_r7_20)
                    float var_38_2 = fconvert.s(x87_r7_20)
                    long double x87_r6_19 = float.t(1)
                    float var_34_2 = fconvert.s(x87_r6_19)
                    float var_1e8[0x10]
                    __builtin_memcpy(&var_1e8, &var_70, 0x40)
                    var_70 = fconvert.s(x87_r6_19)
                    float var_6c_3 = fconvert.s(x87_r7_20)
                    float var_68_3 = fconvert.s(x87_r7_20)
                    float var_64_3 = fconvert.s(fconvert.t(*(ebx_2 - 0x14)))
                    float var_60_3 = fconvert.s(x87_r7_20)
                    float var_58_3 = fconvert.s(x87_r7_20)
                    float var_5c_3 = fconvert.s(x87_r6_19)
                    float var_54_3 = fconvert.s(fconvert.t(*(ebx_2 - 0x10)))
                    float var_50_3 = fconvert.s(x87_r7_20)
                    float var_4c_3 = fconvert.s(x87_r7_20)
                    float var_48_3 = fconvert.s(x87_r6_19)
                    float var_44_3 = fconvert.s(fconvert.t(*(ebx_2 - 0xc)))
                    float var_40_3 = fconvert.s(x87_r7_20)
                    float var_3c_3 = fconvert.s(x87_r7_20)
                    float var_38_3 = fconvert.s(x87_r7_20)
                    float var_34_3 = fconvert.s(x87_r6_19)
                    float var_2e8[0x10]
                    __builtin_memcpy(&var_2e8, &var_70, 0x40)
                    sub_406020(&var_70, &var_2e8, &var_1e8)
                    float var_128[0x10]
                    __builtin_memcpy(&var_128, &var_70, 0x40)
                    sub_406020(&var_70, &var_128, &var_268)
                    float var_228[0x10]
                    __builtin_memcpy(&var_228, &var_70, 0x40)
                    sub_406020(&var_70, &var_228, &var_1a8)
                    float var_2a8[0x10]
                    __builtin_memcpy(&var_2a8, &var_70, 0x40)
                    sub_406020(&var_3a8, (edi_4 << 6) + edi_1, &var_2a8)
                    void var_328
                    __builtin_memcpy(&var_328, &var_3a8, 0x40)
                    esi_1 = &var_328
                else
                    sub_4d5d90(&var_70, arg4, ebx_2 - 0x24)
                    float var_168[0x10]
                    __builtin_memcpy(&var_168, &var_70, 0x40)
                    sub_406020(&var_70, (edi_4 << 6) + edi_1, &var_168)
                    void var_e8
                    __builtin_memcpy(&var_e8, &var_70, 0x40)
                    esi_1 = &var_e8
            else
                sub_4d5d90(&var_70, var_9c_1, ebx_2 - 0x24)
                void var_368
                __builtin_memcpy(&var_368, &var_70, 0x40)
                esi_1 = &var_368
            int32_t edi_6 = var_20_1
            var_24_1 += 0xd0
            var_20_1 += 0x40
            result = result_2 + 1
            ebx_2 += 0x2c
            ecx = __builtin_memcpy(edi_6, esi_1, 0x40)
            result_2 = result
            
            if (result s>= var_7c)
                esi = var_28
                break
            
            result = result_1
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
