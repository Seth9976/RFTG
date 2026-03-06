// 函数名称: sub_40aac0
// 虚拟地址: 0x40aac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40aac0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_27e7a50
    *(eax_2 + 0x1d) = *(eax_2 + 0x1d) == 0
    RECT rect
    GetClientRect(data_30785e0, &rect)
    int32_t ecx_2 = rect.bottom - rect.top
    void* edi = data_27e7fd0
    bool cond:1 = *(data_27e7a50 + 0x1d) == 0
    *(edi + 0x18) = ecx_2
    int32_t edx_4
    int32_t eax_5
    
    if (cond:1)
        edx_4:eax_5 = muls.dp.d(0x55555556, ecx_2 << 2)
    else
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = muls.dp.d(0x38e38e39, ecx_2 << 4)
        edx_4 = edx_3 s>> 1
    int32_t eax_8 = (edx_4 u>> 0x1f) + edx_4
    *(edi + 0x14) = eax_8
    rect.bottom = ecx_2
    rect.right = eax_8
    var_10
    sub_4c5ea0(&var_10)
    int32_t ebx
    ebx.b = data_27e7a40 != 0
    
    if (ebx.b == 0)
        sub_4075c0()
    
    int32_t result
    
    if (*(data_27e7a40 + 0x18) != 0)
        void* eax_9 = data_27e7fd0
        rect.right = fconvert.s(float.t(*(eax_9 + 0x14)))
        rect.bottom = fconvert.s(float.t(*(eax_9 + 0x18)))
        sub_466520(rect.right, rect.bottom)
        result = sub_463b50()
    
    if (*(data_27e7a40 + 0x18) == 0 || ebx.b == 0)
        result = sub_407670()
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
