// 函数名称: sub_5d0150
// 虚拟地址: 0x5d0150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d0150(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = arg2
    int32_t i = arg2
    int32_t* ecx = data_bedd20
    
    for (; i s> 0; i -= 1)
        ecx = ecx[0x11c]
    
    *arg1 = *ecx
    arg1[1] = ecx[1]
    int32_t ecx_1 = ecx[3]
    arg1[2] = ecx[2]
    arg1[3] = ecx_1
    return arg1
}
