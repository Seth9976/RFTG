// 函数名称: sub_6483d0
// 虚拟地址: 0x6483d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_6483d0(void* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x18)
    int32_t eax = 0
    
    if (esi s> 0)
        void* edx_1 = arg1 + 0x720
        
        do
            if (*edx_1 == arg2)
                return eax
            
            eax += 1
            edx_1 += 4
        while (eax s< esi)
    
    *(arg1 + 0x18) = esi + 1
    return esi
}
