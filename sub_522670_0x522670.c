// 函数名称: sub_522670
// 虚拟地址: 0x522670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_522670(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result != 2 && result != 3 && result != 4)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
