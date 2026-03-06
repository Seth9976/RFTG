// 函数名称: sub_67d100
// 虚拟地址: 0x67d100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67d100(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    void* esi = *(result + 0x1a4)
    
    if (*(result + 0x54) != 0)
        result = (*(*(result + 0x1cc) + 8))(result)
    
    *(esi + 0xc) += 1
    return result
}
