// 函数名称: sub_4d43f0
// 虚拟地址: 0x4d43f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_4d43f0(int32_t arg1, void* arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_UnstructuredChoreWrapper@_UnrealizedChore@details@Concurrency@@CAXPAV123@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_f8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result_1 = *(arg2 + 4)
    char** result
    char** result_2
    
    if (result_1 != 0)
        if (result_1[1] != 2)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = result_1
        result_2 = result_1
    else
        result_2 = sub_50a390(result_1 + 2)
        result = result_2
    
    if (*result_2 == 0)
        sub_5094d0(result_2, 0, 1)
    
    result_2[7] = &result_2[7][1]
    int32_t eax_5 = 0
    int32_t var_8_1 = 0
    void* esi_2 = ***result_2
    
    if (esi_2 == 0)
    label_4d44a0:
        __builtin_memcpy(arg4, &data_be4c5c, 0x20)
    else
        int32_t edx = *(esi_2 + 0x10)
        
        if (edx s<= 0)
        label_4d44a0_1:
            __builtin_memcpy(arg4, &data_be4c5c, 0x20)
        else
            int32_t* ecx_2 = *(esi_2 + 0x14) + 0x2c
            
            while (*ecx_2 != arg3)
                eax_5 += 1
                ecx_2 = &ecx_2[0xf]
                
                if (eax_5 s>= edx)
                    goto label_4d44a0_2
            
            if (eax_5 != 0xffffffff)
                float* ecx_7 = *(esi_2 + 0x14) + eax_5 * 0x3c
                void* edx_4 = *(arg2 + 0x2c)
                int32_t eax_7
                
                if (edx_4 != 0)
                    eax_7 = ecx_7[0xd]
                
                float var_90
                
                if (edx_4 == 0 || eax_7 s< 0 || eax_7 s>= *(esi_2 + 8))
                    int32_t var_24_2 = ecx_7[4]
                    int32_t var_20_2 = ecx_7[5]
                    int32_t var_1c_2 = ecx_7[6]
                    float var_34_2 = *ecx_7
                    int32_t var_30_2 = ecx_7[1]
                    int32_t var_2c_2 = ecx_7[2]
                    int32_t var_28_2 = ecx_7[3]
                else
                    if (eax_7 s>= *(edx_4 + 0x80))
                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                            "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    float* eax_9 = (eax_7 << 6) + *(edx_4 + 0x7c)
                    float var_78[0x7]
                    sub_4d5d90(&var_78, edx_4, ecx_7)
                    float var_e8
                    __builtin_memcpy(&var_e8, &var_78, 0x40)
                    sub_406020(&var_78, eax_9, &var_e8)
                    __builtin_memcpy(&var_e8, &var_78, 0x40)
                    float var_5c
                    sub_4d5e80(&var_e8, eax_9, &var_5c)
                    float* eax_13 = sub_413580(&var_5c, &var_90)
                    float var_34_1 = *eax_13
                    int32_t ecx_11 = eax_13[2]
                    int32_t var_30_1 = eax_13[1]
                    int32_t edx_7 = eax_13[3]
                    float var_dc
                    var_90 = fconvert.s(fconvert.t(var_dc))
                    int32_t var_2c_1 = ecx_11
                    int32_t var_28_1 = edx_7
                    float var_24_1 = var_90
                    float var_cc
                    float var_20_1 = fconvert.s(fconvert.t(var_cc))
                    float var_bc
                    float var_1c_1 = fconvert.s(fconvert.t(var_bc))
                
                int32_t edx_12 = *(arg2 + 0xc)
                float var_38 = fconvert.s(float.t(1))
                int32_t eax_20 = *(arg2 + 0x10)
                int32_t var_8c_2 = *(arg2 + 8)
                float var_a0 = fconvert.s(fconvert.t(*(arg2 + 0x24)))
                int32_t var_9c_1 = *(arg2 + 0x14)
                int32_t var_88_2 = edx_12
                int32_t edx_13 = *(arg2 + 0x18)
                int32_t var_84_1 = eax_20
                int32_t eax_21 = *(arg2 + 0x1c)
                var_90 = *(arg2 + 0x20)
                int32_t var_98_1 = edx_13
                int32_t var_94_1 = eax_21
                float var_58[0x8]
                __builtin_memcpy(&var_58, &var_a0, 0x20)
                sub_405f60(arg4, &var_58)
            else
            label_4d44a0_2:
                __builtin_memcpy(arg4, &data_be4c5c, 0x20)
    
    result[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
