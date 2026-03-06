// 函数名称: sub_530e10
// 虚拟地址: 0x530e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_530e10(int32_t arg1, int32_t* arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t ecx = *arg2
    int32_t ecx = *arg2
    int32_t result = 0
    
    if (ecx s> 0)
        int32_t* edx = arg2[1]
        
        do
            if (*edx == arg3)
                result.b = 1
                return result
            
            result += 1
            edx = &edx[2]
        while (result s< ecx)
    
    result.b = 0
    return result
}
