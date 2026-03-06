// 函数名称: sub_569b60
// 虚拟地址: 0x569b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_569b60(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx_3 = *(arg2 + 0x68)
    int32_t ecx_3 = *(arg2 + 0x68)
    int32_t* eax = data_3079210
    
    for (int32_t* i = *(*eax + (((ecx_3 s>> 4 | ecx_3) & eax[1]) << 2)); i != 0; i = i[5])
        if (ecx_3 == *i)
            if (i == 0xfffffffc)
                break
            
            int32_t eax_4 = i[4]
            
            if (eax_4 == 0)
                return 5
            
            if (eax_4 != 1)
                sub_4c5870("Halt", &data_83f3d3, "Editor\EditMode.cpp", 0x183, 
                    "sEditModeGetStructureFilterGroup")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            char** esi_4 = *(arg2 + 4)
            
            if (esi_4 == 0)
                esi_4 = sub_50a390(esi_4 + 2)
            else if (esi_4[1] != 2)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_4 == 0)
                sub_5094d0(esi_4, 0, 1)
            
            esi_4[7] = &esi_4[7][1]
            int32_t result = *(**esi_4 + 0x20)
            esi_4[7] -= 1
            return result
    
    sub_4c5870("pEditModeStructure", &data_83f3d3, "Editor\EditMode.cpp", 0x16f, 
        "sEditModeGetStructureFilterGroup")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
