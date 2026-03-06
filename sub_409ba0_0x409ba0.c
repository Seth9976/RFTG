// 函数名称: sub_409ba0
// 虚拟地址: 0x409ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_409ba0()
{
    // 第一条实际指令: void var_20
    void var_20
    int32_t eax_1 = __security_cookie ^ &var_20
    
    if (*(data_27e7a50 + 0x1e) == 0)
        RECT rect
        GetClientRect(data_30785e0, &rect)
        *(data_27e7a50 + 0x20) = rect.bottom - rect.top
    
    int32_t result = data_27c05e8
    
    if (result == 5 || result == 7)
        sub_4075c0()
        void* eax_5 = data_27e7a40
        *(eax_5 + 0x14) += 1
        data_27c05dc = 0
        sub_462720()
        result = sub_407670()
    
    sub_5a6aba(eax_1 ^ &var_20)
    return result
}
