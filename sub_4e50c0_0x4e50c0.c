// 函数名称: sub_4e50c0
// 虚拟地址: 0x4e50c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4e50c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = data_27e7fcc
    
    if (result == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r7 = float.t(0)
    float* edi = &result[0x15]
    long double temp1 = fconvert.t(*edi)
    x87_r7 - temp1
    result.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        if ((data_316617c & 1) == 0)
            data_316617c.d |= 1
            int32_t var_8_1 = 0
            data_3166178 = sub_509140(0x12, "sys/DebugFont.font")
        
        char* const var_14 = &data_83f3d3
        int32_t var_8_2 = 1
        void* eax_5 = data_27e7bbc
        char* var_1c = fconvert.s(fconvert.t(*edi))
        long double x87_r7_2 = float.t(0)
        int32_t esi_1 = *(eax_5 + 0x14)
        long double x87_r6_1 = fconvert.t(var_1c)
        x87_r6_1 - x87_r7_2
        eax_5.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r7_3
        
        if (p_1)
            x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
        else
            x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
        
        int32_t eax_6 = sub_685f40(x87_r7_3)
        char** eax_9
        
        if (esi_1 s> 1)
            int32_t var_a8_3 = esi_1
            int32_t var_ac_1 = eax_6
            var_8_2.b = 3
            sub_4c4510(sub_4c4a50(&var_1c, "%d stall %d"))
            var_8_2.b = 1
            char* eax_11 = var_1c
            
            if (eax_11 != 0 && *eax_11 != 0)
                eax_9 = &var_1c
            label_4e5206:
                void* eax_12 = sub_4c4060(eax_9)
                int32_t temp2_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_3 = *(eax_12 + 0xc) + 0x10
                    sub_4f4430(eax_12, sub_4f4380(esi_3), esi_3)
        else
            int32_t var_a8_1 = eax_6
            var_8_2.b = 2
            char* var_18
            sub_4c4510(sub_4c4a50(&var_18, "%d"))
            var_8_2.b = 1
            char* eax_8 = var_18
            
            if (eax_8 != 0 && *eax_8 != 0)
                eax_9 = &var_18
                goto label_4e5206
        char* const esi_4 = var_14
        char* const edi_2 = &data_83f3d3
        
        if (esi_4 != 0)
            edi_2 = esi_4
        
        long double x87_r7_4 = float.t(1)
        float var_48 = fconvert.s(x87_r7_4)
        long double x87_r6_2 = float.t(0)
        float var_3c_1 = fconvert.s(x87_r6_2)
        float var_30_1 = fconvert.s(x87_r6_2)
        float var_44_1 = fconvert.s(x87_r6_2)
        float var_2c_1 = fconvert.s(x87_r6_2)
        float var_38_1 = fconvert.s(x87_r7_4)
        float var_40_1 = fconvert.s(fconvert.t(3f))
        float var_34_1 = fconvert.s(x87_r6_2)
        float var_28_1 = fconvert.s(x87_r7_4)
        float var_6c[0x9]
        sub_413350(&var_48, &var_6c, 0x840974)
        long double x87_r7_7 = float.t(1)
        var_48 = fconvert.s(x87_r7_7)
        long double x87_r6_5 = float.t(0)
        float var_3c_2 = fconvert.s(x87_r6_5)
        float var_30_2 = fconvert.s(x87_r6_5)
        float var_44_2 = fconvert.s(x87_r6_5)
        float var_2c_2 = fconvert.s(x87_r6_5)
        float var_38_2 = fconvert.s(x87_r7_7)
        float var_40_2 = fconvert.s(fconvert.t(0f))
        float var_34_2 = fconvert.s(fconvert.t(0f))
        float var_28_2 = fconvert.s(x87_r7_7)
        float var_90[0x9]
        sub_413350(&var_48, &var_90, &var_6c)
        int80_t st0_1
        st0_1, result = sub_4ca330(0xffffffff, data_3166178, edi_2, &var_90, 0xffffffff, 0xffffffff)
        int32_t var_8_3 = 0xffffffff
        
        if (esi_4 != 0 && *esi_4 != 0)
            result = sub_4c4060(&var_14)
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                int32_t esi_6 = result[3] + 0x10
                result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
