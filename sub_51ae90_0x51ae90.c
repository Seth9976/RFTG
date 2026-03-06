// 函数名称: sub_51ae90
// 虚拟地址: 0x51ae90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_51ae90(int32_t* arg1 @ esi, float arg2, float arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_30785e0, &rect)
    
    if (rect.right == 0 || rect.bottom == 0)
        arg1[1] = 0
        *arg1 = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg1
    
    void* ebx = data_27e7fd0
    long double x87_r7_3 = float.t(0)
    long double x87_r6 =
        fconvert.t(fconvert.s(float.t(rect.right) * fconvert.t(arg2) / float.t(*(ebx + 0x14))))
    x87_r6 - x87_r7_3
    BOOL eax_2
    eax_2.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_1
    
    if (p)
        x87_r6_1 = x87_r6 + x87_r5
    else
        x87_r6_1 = x87_r6 - x87_r5
    
    int32_t edi = sub_685f40(x87_r6_1)
    long double x87_r5_5 =
        fconvert.t(fconvert.s(float.t(rect.bottom) * fconvert.t(arg3) / float.t(*(ebx + 0x18))))
    x87_r5_5 - x87_r7_3
    int32_t eax_3
    eax_3.w = (x87_r5_5 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_5, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r5_5 == x87_r7_3 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        arg1[1] = sub_685f40(x87_r7_3 + x87_r5)
        *arg1 = edi
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg1
    
    arg1[1] = sub_685f40(x87_r7_3 - x87_r5)
    *arg1 = edi
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
