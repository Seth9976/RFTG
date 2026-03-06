// 函数名称: ?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z
// 虚拟地址: 0x527480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcall?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696ef8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = arg1
    float var_14 = fconvert.s(fconvert.t(*(ebx + 0x14f4)) * fconvert.t(*(ebx + 0x24)))
    long double x87_r7_2 = fconvert.t(var_14)
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7_2
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        eax_3 = *(ebx + 0x1560)
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* var_18
            sub_4c42b0(&var_18, "RightBottom")
            char* eax_4 = var_18
            
            if (eax_4 != 0 && *eax_4 != 0)
                void* eax_6 = sub_4c4060(&var_18)
                int32_t temp1_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_3 = *(eax_6 + 0xc) + 0x10
                    arg1 = sub_4f4430(eax_6, sub_4f4380(esi_3), esi_3)
            
            void* var_58_2 = arg1
            char* eax_10 = sub_4f4b70(ebx + 0x1570, fconvert.s(fconvert.t(*(ebx + 0x58))))
            float var_58_4 = fconvert.s(fconvert.t(*(ebx + 0x58)))
            var_18 = eax_10
            int32_t* eax_12 = sub_4f4b70(ebx + 0x1574, var_58_4)
            long double x87_r7_5 = fconvert.t(*(ebx + 0x1568))
            long double x87_r6_1 = fconvert.t(var_14)
            int32_t* var_20 = eax_12
            bool cond:0_1 = *(ebx + 0x1578) != 0
            float var_24_1 = fconvert.s(x87_r6_1 * fconvert.t(*(ebx + 0x156c)))
            long double x87_r6_3 = fconvert.t(fconvert.s(x87_r7_5 * x87_r6_1))
            long double x87_r6_5 = fconvert.t(*(ebx + 0xc))
            float var_30 = fconvert.s(fconvert.t(*(ebx + 8)) + x87_r6_3)
            long double x87_r5_3 = fconvert.t(var_24_1)
            float var_2c_1 = fconvert.s(x87_r6_5 + x87_r5_3)
            float edx_1 = fconvert.s(x87_r6_3 + fconvert.t(*(ebx + 0x10)))
            float var_28_2 = edx_1
            float var_24_2 = fconvert.s(x87_r5_3 + fconvert.t(*(ebx + 0x14)))
            
            if (not(cond:0_1))
                void* eax_15
                int32_t ecx_2
                eax_15, ecx_2, edx_1 = sub_5a9450(eax_3, 0xd)
                
                if (eax_15 == 0)
                    int32_t var_58_5 = ecx_2
                    int32_t eax_18
                    int80_t st0
                    st0, eax_18 = sub_4caf10(*(ebx + 0x14ec), &var_18, &var_30, eax_3, *(ebx + 0x1564), 
                        &var_18, &var_20, fconvert.s(fconvert.t(var_14)))
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_18
            
            sub_4c4330(eax_3, edx_1, &var_18)
            char** var_58_7 = &var_18
            int32_t var_8_1 = 0
            float var_58_8 = fconvert.s(fconvert.t(var_14))
            sub_4cc5a0(&var_30, *(ebx + 0x1564), eax_10, var_20, *(ebx + 0x14ec))
            int32_t var_8_2 = 0xffffffff
            eax_3 = var_18
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_4c4060(&var_18)
                int32_t temp2_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_6 = &eax_3[3][2]
                    eax_3 = sub_4f4430(eax_3, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
