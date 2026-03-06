// 函数名称: sub_505e40
// 虚拟地址: 0x505e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_505e40(char* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result = arg3
    
    if (result != 8 && result s>= 0)
        int32_t* edi_1 = arg2
        result = sub_505be0(edi_1)
        int32_t esi_1 = edi_1[0x12]
        bool cond:0_1 = esi_1 != 0
        
        if (esi_1 s<= 0)
            goto label_505ea3
        
        char* const eax_3 = *edi_1
        
        if (eax_3 == 0)
            eax_3 = &data_83f3d3
        
        result = sub_506d70(eax_3)
        
        if (result s< esi_1)
            goto label_505ea9
        
        cond:0_1 = esi_1 != 0
    label_505ea3:
        
        if (not(cond:0_1))
        label_505ea9:
            var_14 = &data_83f3d3
            int32_t var_8_1 = 0
            char* const eax_4 = *edi_1
            
            if (eax_4 == 0)
                eax_4 = &data_83f3d3
            
            edi_1[1]
            int32_t* esi_2 = &var_14
            sub_4c4690(esi_2, eax_4)
            sub_4c4810(esi_2, arg3)
            char* eax_6 = *edi_1
            
            if (eax_6 != 0 && *eax_6 != 0)
                *(sub_4c4060(edi_1) + 8)
            
            char* const ecx_2 = *edi_1
            
            if (ecx_2 == 0)
                ecx_2 = &data_83f3d3
            
            sub_4c4690(&var_14, &ecx_2[edi_1[1]])
            long double x87_r7_1 = fconvert.t(edi_1[0x13])
            long double x87_r6_1 = float.t(0)
            char* const ebx_4 = var_14
            x87_r6_1 - x87_r7_1
            int32_t eax_11
            eax_11.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                char* const ecx_3 = &data_83f3d3
                
                if (ebx_4 != 0)
                    ecx_3 = ebx_4
                
                int32_t var_28_4 = edi_1[0xc]
                long double st0_1
                st0_1, result = sub_4cb0b0(ecx_3)
                long double x87_r6_2 = fconvert.t(edi_1[0x13])
                x87_r6_2 - st0_1
                result.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe
            
            if (not(p_1) || (result:1.b & 0x41) == 0)
                result = sub_4cafc0(arg2[0xc], arg3)
                
                if (result.b == 0)
                    edi_1 = arg2
                else
                    sub_4c4510(&var_14)
                    result = sub_506000(arg2, arg2[1])
                    ebx_4 = var_14
                    arg2[1] = result
                    arg2[3] = result
                    edi_1 = arg2
            
            int32_t var_8_2 = 0xffffffff
            
            if (ebx_4 != 0 && *ebx_4 != 0)
                result = sub_4c4060(&var_14)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_6 = *(result + 0xc) + 0x10
                    result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
                    edi_1 = arg2
        
        edi_1[2] = fconvert.s(float.t(0))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
