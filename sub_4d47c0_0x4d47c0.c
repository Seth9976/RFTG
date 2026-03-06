// 函数名称: sub_4d47c0
// 虚拟地址: 0x4d47c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_4d47c0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char** esi = *(arg1 + 4)
    
    if (esi == 0)
        esi = sub_50a390(esi + 2)
    else if (esi[1] != 2)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    esi[7] = &esi[7][1]
    void** result = **esi
    void* ecx_2 = *result
    
    if (ecx_2 != 0)
        long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x24))))
        *(arg1 + 0x44) = fconvert.s(fconvert.t(*(ecx_2 + 0x38)) * x87_r6)
        *(arg1 + 0x48) = fconvert.s(x87_r6 * fconvert.t(*(*result + 0x3c)))
        esi[7] -= 1
        return result
    
    long double x87_r7 = float.t(1)
    *(arg1 + 0x44) = fconvert.s(x87_r7)
    *(arg1 + 0x48) = fconvert.s(x87_r7)
    esi[7] -= 1
    return result
}
