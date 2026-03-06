// 函数名称: ___std_fs_change_permissions@12
// 虚拟地址: 0x53ec90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")___std_fs_change_permissions@12(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_50 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_18
    int32_t* var_54 = &var_18
    float var_1c
    int32_t* var_58 = &var_1c
    float var_20
    int32_t* var_5c = &var_20
    int32_t eax_4 = sub_5a957c(*arg2, " %f %f %f")
    char* result_1
    float eax_5
    float ecx
    float edx
    
    if (eax_4 == 3)
        ecx = var_20
        edx = var_1c
        eax_5 = var_18
    label_53ed11:
        *arg3 = ecx
        arg3[1] = edx
        arg3[2] = eax_5
    else if (eax_4 == 1)
        result_1 = fconvert.s(fconvert.t(var_20))
        long double x87_r7_2 = fconvert.t(result_1)
        ecx = fconvert.s(x87_r7_2)
        edx = fconvert.s(x87_r7_2)
        eax_5 = fconvert.s(x87_r7_2)
        goto label_53ed11
    int32_t var_8_1 = 0
    sub_4c4510(sub_53e920(arg3, &result_1))
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_3), esi_3)
    
    int32_t ebx_1 = *arg4
    
    if (ebx_1 != 0)
        *arg2 = ebx_1
    else
        result = &data_83f3d3
        *arg2 = &data_83f3d3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
