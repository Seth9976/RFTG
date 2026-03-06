// 函数名称: sub_5045f0
// 虚拟地址: 0x5045f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5045f0(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t result = arg1
    uint32_t result = arg1
    int32_t** i = *(result + 4)
    
    while (i != 0)
        int32_t* ecx_1 = *i
        i = i[1]
        int32_t edx
        result, edx = sub_504530(arg2, edx, ecx_1)
    
    return result
}
