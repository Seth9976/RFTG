// 函数名称: sub_527760
// 虚拟地址: 0x527760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_527760(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t* ecx = *(arg3 + 0x1538)
    int32_t* ecx = *(arg3 + 0x1538)
    int32_t* var_c
    
    if (arg1 == 0)
        var_c = *(arg3 + 0x1534)
    else
        var_c = arg1
    
    int32_t eax = *(arg3 + 0x153d)
    int32_t var_18 = eax
    int16_t var_7 = 0
    char var_5 = 0
    char var_8
    var_8.d = eax u>> 0x18
    int32_t var_14 = 0.d
    var_8.d = fconvert.s(float.t(0) * fconvert.t(*(arg3 + 0x58)))
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(0f)
    x87_r6 - x87_r7_2
    uint32_t eax_1
    eax_1.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t* result
    int32_t ecx_2
    result, ecx_2 = sub_685f40(x87_r7_3)
    var_18:3.b = result.b
    
    if (result.b != 0)
        if (*(arg3 + 0x14f0) == 1)
            int32_t var_4c = ecx_2
            return sub_527690(var_c, fconvert.s(float.t(1)), &var_18)
        
        void* eax_3 = data_27e7fe0
        void* edi_1 = arg3 + 8
        int80_t st0_1
        
        if (*(eax_3 + 0x38) == 0)
            st0_1, result = sub_4d9830(ecx, &var_18, var_c, &data_84076c, edi_1, ecx)
        else
            void var_28
            result = sub_4d9650(eax_3, eax_3 + 0x28, &data_84076c, &var_28, edi_1)
            void var_38
            
            if (result.b != 0)
                st0_1, result = sub_4d9830(result, &var_18, var_c, &var_28, &var_38, ecx)
    
    return result
}
