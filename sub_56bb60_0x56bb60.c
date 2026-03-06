// 函数名称: sub_56bb60
// 虚拟地址: 0x56bb60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_56bb60()
{
    // 第一条实际指令: HWND result = data_26a6758
    HWND result = data_26a6758
    
    if (result == data_26a675c)
        return result
    
    int32_t* ecx_1 = data_27e7fd0
    int32_t esi_1 = *((result << 2) + &data_26a6558)
    data_26a6758 = &result->unused + 1
    (*(*ecx_1 + 4))()
    sub_56b930()
    void* eax_2 = data_27e7bbc
    *(eax_2 + 0x1c) = 1
    *(eax_2 + 0x28) = 0
    *(eax_2 + 0x20) = 0
    *(eax_2 + 0x24) = esi_1
    return SetFocus(data_30785e0)
}
