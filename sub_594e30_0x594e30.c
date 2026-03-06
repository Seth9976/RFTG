// 函数名称: sub_594e30
// 虚拟地址: 0x594e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_594e30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0x18)
    int32_t* result = *(arg1 + 0x18)
    *result += arg2
    result[1] -= arg2
    return result
}
