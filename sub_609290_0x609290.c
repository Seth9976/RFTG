// 函数名称: sub_609290
// 虚拟地址: 0x609290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_609290(void* arg1)
{
    // 第一条实际指令: void* result
    void* result
    result.b = *(arg1 + 0xc)
    
    if (result.b == 6 || result.b == 1 || result.b == 2)
        data_bf80a4 = 0
    
    return result
}
