// 函数名称: sub_51ae00
// 虚拟地址: 0x51ae00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_51ae00(float* arg1 @ esi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_30785e0, &rect)
    
    if (rect.right == 0 || rect.bottom == 0)
        *arg1 = 0f
        arg1[1] = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg1
    
    void* eax_2 = data_27e7fd0
    long double x87_r7_3 = float.t(*(eax_2 + 0x18))
    *arg1 = fconvert.s(float.t(*(eax_2 + 0x14)) * float.t(arg2) / float.t(rect.right))
    arg1[1] = fconvert.s(x87_r7_3 * float.t(arg3) / float.t(rect.bottom))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
