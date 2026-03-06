// 函数名称: sub_56bbb0
// 虚拟地址: 0x56bbb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_56bbb0(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* edx = *data_27e7fd0
    void* edx = *data_27e7fd0
    *((data_26a6758 << 2) + &data_26a6558) = arg1
    int32_t eax_1 = data_26a6758 + 1
    data_26a6758 = eax_1
    data_26a675c = eax_1
    (*(edx + 4))()
    sub_56b930()
    void* eax_3 = data_27e7bbc
    *(eax_3 + 0x28) = 0
    *(eax_3 + 0x20) = 0
    HWND hWnd = data_30785e0
    *(eax_3 + 0x1c) = 1
    *(eax_3 + 0x24) = arg1
    return SetFocus(hWnd)
}
