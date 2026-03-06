// 函数名称: sub_40d4c0
// 虚拟地址: 0x40d4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_40d4c0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4075c0()
    sub_4075c0()
    void* ecx = data_27e7a40
    *arg1 = 0
    int32_t eax_1
    int32_t edx
    edx:eax_1 = muls.dp.d(0x2aaaaaab, *(ecx + 0x3188e4) + 6)
    int32_t eax_4 = (edx u>> 0x1f) + edx
    
    if (eax_4 s> 0xa)
        eax_4 = 0xa
    
    *arg2 = eax_4
    return sub_407670() __tailcall
}
