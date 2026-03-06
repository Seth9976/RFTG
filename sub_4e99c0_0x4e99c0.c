// 函数名称: sub_4e99c0
// 虚拟地址: 0x4e99c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4e99c0(void* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x24)
    int32_t esi = *(arg1 + 0x24)
    int32_t eax = 0
    
    if (esi s> 0)
        int32_t* edx_1 = *(arg1 + 0x20)
        
        do
            if (*edx_1 == arg2)
                return eax
            
            eax += 1
            edx_1 = &edx_1[1]
        while (eax s< esi)
    
    if (esi s< 0xc8)
        *(*(arg1 + 0x20) + (esi << 2)) = arg2
        *(arg1 + 0x24) += 1
        return esi
    
    sub_4c5870("pFlanimDef->mImageCount < MAX_IMAGES_IN_FLANIM", &data_83f3d3, "Flanim.cpp", 0x53c, 
        "FlanimGetOrAddImage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
