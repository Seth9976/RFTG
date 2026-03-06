// 函数名称: sub_667fa0
// 虚拟地址: 0x667fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_667fa0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x6c)
    int32_t eax = *(arg1 + 0x6c)
    
    if ((eax.b & 1) == 0 || (eax.b & 4) == 0)
        sub_664320(arg1, "No image in file")
        noreturn
    
    *(arg1 + 0x6c) = eax | 0x18
    
    if (arg2 != 0)
        sub_664100(arg1, "Incorrect IEND chunk length")
    
    return sub_667b40(arg1, arg2)
}
