// 函数名称: sub_678f00
// 虚拟地址: 0x678f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_678f00(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg2
    int32_t result = arg2
    void* esi = *arg1
    
    if (result s>= 0)
        if (*(esi + 0x68) s< result)
            return result
        
        return (*(esi + 8))(arg1)
    
    if (*(esi + 0x6c) == 0 || *(esi + 0x68) s>= 3)
        result = (*(esi + 8))(arg1)
    
    *(esi + 0x6c) += 1
    return result
}
