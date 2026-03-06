// 函数名称: sub_5360a0
// 虚拟地址: 0x5360a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5360a0(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x2d0)
    int32_t* esi = *(arg1 + 0x2d0)
    int32_t result
    
    if (esi == 0)
        result = *(arg1 + 0x2d4)
    else
        if (esi[1] != 0x15)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi == 0)
            sub_5094d0(esi, 0, 1)
        
        esi[7] += 1
        result = *(**esi + 0x1c)
        esi[7] -= 1
    
    if (result != 0)
        return result
    
    sub_4c5870("pSoundData", &data_83f3d3, "SoundOgg.cpp", 0xf0, "SoundOggReaderGetSoundData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
