// 函数名称: sub_534d80
// 虚拟地址: 0x534d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_534d80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5, void* arg6, int32_t arg7, char arg8)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691ee8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3
    int32_t edx
    eax_3, edx = sub_4ff5f0(data_315f7b8)
    char** result = sub_509750(eax_3, edx, 5, eax_3)
    int32_t ecx
    void* edx_1
    ecx, edx_1 = sub_534bc0(eax_3)
    char** result_1
    char** result_2
    
    if (result != 0)
        if (result[1] != 5)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result_1 = result
        result_2 = result
    else
        char** result_3
        result_3, ecx, edx_1 = sub_50a390(result + 5)
        result_2 = result_3
        result_1 = result_2
    
    if (*result_2 == 0)
        ecx, edx_1 = sub_5094d0(result_2, 0, 1)
    
    result_2[7] = &result_2[7][1]
    void* ebx = **result_2
    int32_t var_8_1 = 0
    int32_t var_48_1 = arg1
    int32_t* esi_3 = *(*(ebx + 4) + 4) + 4
    int32_t var_4c = 0x5b
    int32_t* var_1c = esi_3
    int32_t ecx_2
    void* edx_2
    ecx_2, edx_2 = sub_530b60(esi_3, edx_1, ecx, &data_8bd334)
    int32_t var_48_2 = arg1
    int32_t var_4c_1 = 0x5c
    int32_t* ecx_3 = sub_530b60(esi_3, edx_2, ecx_2, &data_8bd334)
    
    if (arg3 s> 8)
        sub_4c5870("numTextures <= NUM_DIFFUSE", &data_83f3d3, "Material.cpp", 0x3ab, 
            "MaterialCreateMemory")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_3 = 0
    
    if (arg3 s> 0)
        void* var_14_1 = 0x1d
        
        do
            void* edx_3 = *(arg2 + (edi_3 << 2))
            void* var_48_3 = edx_3
            int32_t var_4c_2 = edi_3 + 0x53
            int32_t var_48_4 = 1
            void* var_4c_3 = var_14_1 - 1
            int32_t var_48_5 = 1
            void* var_4c_4 = var_14_1
            ecx_3 = sub_530b60(esi_3, var_14_1, 
                sub_530b60(esi_3, sub_530b60(esi_3, edx_3, arg2, &data_8bd334), var_14_1 - 1, 
                    &data_8bd334), 
                &data_8bd334)
            var_14_1 += 6
            edi_3 += 1
        while (edi_3 s< arg3)
    
    void* i_2 = arg5
    
    if (i_2 s> 0)
        int32_t eax_13 = 0
        void* i
        
        do
            int32_t esi_4 = eax_13 + arg4
            int32_t edi_4 = *(*(ebx + 4) + 4) + eax_13 + 0xc
            eax_13 += 0x20
            i = i_2
            i_2 -= 1
            ecx_3 = __builtin_memcpy(edi_4, esi_4, 0x20)
        while (i != 1)
        esi_3 = var_1c
    
    int32_t eax_30 = arg7
    long double x87_r7 = fconvert.t(255.0)
    int32_t edi_5 = 0
    
    if (eax_30 s>= 4)
        int32_t esi_5 = 0
        ecx_3 = arg6 + 8
        int32_t i_3 = ((eax_30 - 4) u>> 2) + 1
        int32_t edx_6 = i_3 << 2
        int32_t i_1
        
        do
            int32_t eax_14 = ecx_3[-2]
            float* eax_17 = *(*(ebx + 4) + 4) + esi_5 + 0x8c
            *eax_17 = fconvert.s(float.t(zx.d(eax_14.b)) / x87_r7)
            eax_17[1] = fconvert.s(float.t(zx.d((eax_14 u>> 8).b)) / x87_r7)
            eax_17[2] = fconvert.s(float.t(zx.d((eax_14 u>> 0x10).b)) / x87_r7)
            eax_17[3] = fconvert.s(float.t(eax_14 u>> 0x18) / x87_r7)
            int32_t eax_18 = ecx_3[-1]
            float* eax_21 = *(*(ebx + 4) + 4) + esi_5 + 0x9c
            *eax_21 = fconvert.s(float.t(zx.d(eax_18.b)) / x87_r7)
            eax_21[1] = fconvert.s(float.t(zx.d((eax_18 u>> 8).b)) / x87_r7)
            eax_21[2] = fconvert.s(float.t(zx.d((eax_18 u>> 0x10).b)) / x87_r7)
            eax_21[3] = fconvert.s(float.t(eax_18 u>> 0x18) / x87_r7)
            int32_t eax_22 = *ecx_3
            ecx_3 = &ecx_3[4]
            float* eax_25 = *(*(ebx + 4) + 4) + esi_5 + 0xac
            *eax_25 = fconvert.s(float.t(zx.d(eax_22.b)) / x87_r7)
            eax_25[1] = fconvert.s(float.t(zx.d((eax_22 u>> 8).b)) / x87_r7)
            eax_25[2] = fconvert.s(float.t(zx.d((eax_22 u>> 0x10).b)) / x87_r7)
            eax_25[3] = fconvert.s(float.t(eax_22 u>> 0x18) / x87_r7)
            int32_t eax_26 = ecx_3[-3]
            int32_t* eax_29 = *(*(ebx + 4) + 4) + esi_5 + 0xbc
            *eax_29 = fconvert.s(float.t(zx.d(eax_26.b)) / x87_r7)
            eax_29[1] = fconvert.s(float.t(zx.d((eax_26 u>> 8).b)) / x87_r7)
            esi_5 += 0x40
            i_1 = i_3
            i_3 -= 1
            eax_29[2] = fconvert.s(float.t(zx.d((eax_26 u>> 0x10).b)) / x87_r7)
            i_2 = fconvert.s(float.t(eax_26 u>> 0x18) / x87_r7)
            eax_29[3] = i_2
        while (i_1 != 1)
        eax_30 = arg7
        esi_3 = var_1c
        edi_5 = edx_6
    
    if (edi_5 s< eax_30)
        ecx_3 = edi_5 << 4
        
        do
            int32_t eax_32 = *(arg6 + (edi_5 << 2))
            edi_5 += 1
            void* eax_35 = *(*(ebx + 4) + 4) + ecx_3 + 0x8c
            *eax_35 = fconvert.s(float.t(zx.d(eax_32.b)) / x87_r7)
            *(eax_35 + 4) = fconvert.s(float.t(zx.d((eax_32 u>> 8).b)) / x87_r7)
            ecx_3 = &ecx_3[4]
            *(eax_35 + 8) = fconvert.s(float.t(zx.d((eax_32 u>> 0x10).b)) / x87_r7)
            i_2 = fconvert.s(float.t(eax_32 u>> 0x18) / x87_r7)
            *(eax_35 + 0xc) = i_2
        while (edi_5 s< arg7)
    
    if (arg8 != 0)
        int32_t var_48_6 = 5
        int32_t var_4c_5 = 3
        int32_t ecx_13
        void* edx_65
        ecx_13, edx_65 = sub_530b60(esi_3, i_2, ecx_3, &data_8bd334)
        int32_t var_48_7 = 2
        int32_t var_4c_6 = 4
        ecx_3, i_2 = sub_530b60(esi_3, edx_65, ecx_13, &data_8bd334)
    
    int32_t var_48_8 = 1
    int32_t var_4c_7 = 0
    int32_t ecx_14
    void* edx_66
    ecx_14, edx_66 = sub_530b60(esi_3, i_2, ecx_3, &data_8bd334)
    int32_t var_48_9 = 0
    int32_t var_4c_8 = 1
    sub_530b60(esi_3, edx_66, ecx_14, &data_8bd334)
    result_1[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
