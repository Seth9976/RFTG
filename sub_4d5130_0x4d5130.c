// 函数名称: sub_4d5130
// 虚拟地址: 0x4d5130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d5130(void* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690068
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** edi = *(arg1 + 4)
    int32_t i = 0
    
    if (edi == 0)
        edi = sub_50a390(2)
    else if (edi[1] != 2)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_1c = edi
    
    if (*edi == 0)
        sub_5094d0(edi, 0, 1)
    
    char* eax_5 = *edi
    edi[7] = &edi[7][1]
    int32_t* eax_6 = *eax_5
    int32_t var_8_1 = 0
    int32_t* esi = *eax_6
    
    if (esi != 0)
        float var_18_1 = fconvert.s(float.t(0))
        char var_11_1 = 1
        
        if (*esi s> 0)
            do
                float var_20
                long double st0_1
                st0_1, eax_6 = sub_4d4f90(eax_6, &var_20, esi, arg1, arg2, i)
                
                if (eax_6.b != 0)
                    long double x87_r7_2 = fconvert.t(var_20)
                    
                    if (var_11_1 == 0)
                        long double x87_r6_1 = fconvert.t(var_18_1)
                        x87_r6_1 - x87_r7_2
                        eax_6.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if (var_11_1 != 0 || (eax_6:1.b & 0x41) == 0)
                        var_18_1 = fconvert.s(x87_r7_2)
                        var_11_1 = 0
                
                i += 1
            while (i s< *esi)
            
            if (var_11_1 == 0)
                edi[7] -= 1
                *arg3 = fconvert.s(fconvert.t(var_18_1))
                float* eax_7
                eax_7.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return 
    
    edi[7] -= 1
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
}
