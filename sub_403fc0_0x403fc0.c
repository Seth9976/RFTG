// 函数名称: sub_403fc0
// 虚拟地址: 0x403fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_403fc0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0xc)
    int32_t result = *(arg1 + 0xc)
    
    if (result != 5)
        data_307cd34 = result
        return result
    
    *(data_27e7a54 + 0x50) = 1
    sub_408a40()
    sub_4772c0()
    return sub_402510(1)
}
