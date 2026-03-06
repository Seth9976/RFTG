// 函数名称: sub_4b7a70
// 虚拟地址: 0x4b7a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b7a70(void* arg1)
{
    // 第一条实际指令: sub_4b7950()
    sub_4b7950()
    sub_4c5680("player left server")
    void* result = sub_4d2b00(*(arg1 + 4))
    
    if (result != 0)
        int32_t ecx_1 = data_be1a6c
        data_be1a6c = zx.d(*(result + 0x20))
        *(result + 0x20) = ecx_1
        data_be1a70 -= 1
    
    return result
}
