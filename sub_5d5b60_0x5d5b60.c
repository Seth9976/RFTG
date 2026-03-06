// 函数名称: sub_5d5b60
// 虚拟地址: 0x5d5b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5b60(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = sub_5d5510()
    int32_t result = sub_5d5510()
    int32_t* ecx = arg1
    
    if (ecx == 0)
        ecx = data_bf7f78
        
        if (ecx == 0)
            return result
    
    int32_t edx_1 = data_bf7f6c
    
    if (edx_1 == 0)
        return sub_5d5910(ecx, data_bf7f74, 0, arg2, arg3)
    
    return edx_1(ecx, arg2, arg3)
}
