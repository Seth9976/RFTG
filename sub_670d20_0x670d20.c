// 函数名称: sub_670d20
// 虚拟地址: 0x670d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_670d20(void* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, PSTR arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg5 s>= 4)
        sub_664100(arg1, "Unrecognized equation type for pCAL chunk")
    
    char* var_30
    char* edi_1 = sub_670650(arg1, arg2, &var_30) + 1
    char* var_c = edi_1
    int32_t ecx_1
    ecx_1.b = arg6 != 0
    int32_t eax_6 = lstrlenA(arg7) + ecx_1
    void* var_2c = &edi_1[eax_6 + 0xa]
    void* eax_8 = sub_6664e0(arg1, arg6 << 2)
    int32_t var_20 = 0
    
    if (arg6 s> 0)
        int32_t* ecx_3 = arg8 - eax_8
        void* edi_2 = eax_8
        int32_t* var_28_1 = ecx_3
        
        while (true)
            int32_t eax_9 = lstrlenA(*(ecx_3 + edi_2))
            int32_t edx_1
            edx_1.b = var_20 != arg6 - 1
            edi_2 += 4
            int32_t eax_10 = eax_9 + edx_1
            var_2c += eax_10
            *(edi_2 - 4) = eax_10
            int32_t eax_12 = var_20 + 1
            var_20 = eax_12
            
            if (eax_12 s>= arg6)
                break
            
            ecx_3 = var_28_1
        
        edi_1 = var_c
    
    if (arg1 != 0)
        uint8_t var_10 = (var_2c u>> 0x18).b
        uint8_t var_f_1 = (var_2c u>> 0x10).b
        *(arg1 + 0x2ac) = 0x22
        uint8_t var_e_1 = (var_2c u>> 8).b
        char var_d_1 = var_2c.b
        __builtin_strncpy(&var_c, "pCAL", 4)
        sub_666640(arg1, &var_10, 8)
        __builtin_strncpy(arg1 + 0x100, "LACp", 4)
        sub_662260(arg1)
        sub_662280(arg1, &var_c, 4)
        char* eax_14 = var_30
        *(arg1 + 0x2ac) = 0x42
        
        if (eax_14 != 0 && edi_1 != 0)
            sub_666640(arg1, eax_14, edi_1)
            sub_662280(arg1, var_30, edi_1)
    
    char var_1c = (arg3 s>> 0x18).b
    char var_1b = (arg3 s>> 0x10).b
    char var_19 = arg3.b
    char var_1a = (arg3 s>> 8).b
    char var_18 = (arg4 s>> 0x18).b
    char var_17 = (arg4 s>> 0x10).b
    char var_16 = (arg4 s>> 8).b
    char var_15 = arg4.b
    char var_14 = arg5.b
    char var_13 = arg6.b
    
    if (arg1 != 0)
        sub_666640(arg1, &var_1c, 0xa)
        sub_662280(arg1, &var_1c, 0xa)
        
        if (arg7 != 0 && eax_6 != 0)
            sub_666640(arg1, arg7, eax_6)
            sub_662280(arg1, arg7, eax_6)
    
    sub_666530(arg1, var_30)
    
    if (arg6 s> 0)
        int32_t* edi_4 = arg8
        void* ecx_18 = eax_8 - edi_4
        int32_t i_1 = arg6
        void* ecx_19 = ecx_18
        int32_t i
        
        do
            char* eax_19 = *edi_4
            int32_t ebx_1 = *(ecx_19 + edi_4)
            var_c = eax_19
            
            if (arg1 != 0 && eax_19 != 0 && ebx_1 != 0)
                sub_666640(arg1, eax_19, ebx_1)
                sub_662280(arg1, var_c, ebx_1)
                ecx_19 = ecx_18
            
            edi_4 = &edi_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result = sub_666530(arg1, eax_8)
    
    if (arg1 != 0)
        int32_t eax_20 = *(arg1 + 0x124)
        var_20.b = (eax_20 u>> 0x18).b
        var_20:1.b = (eax_20 u>> 0x10).b
        *(arg1 + 0x2ac) = 0x82
        var_20:2.b = (eax_20 u>> 8).b
        var_20:3.b = eax_20.b
        result = sub_666640(arg1, &var_20, 4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
