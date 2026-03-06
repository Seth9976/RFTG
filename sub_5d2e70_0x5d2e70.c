// 函数名称: sub_5d2e70
// 虚拟地址: 0x5d2e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d2e70()
{
    // 第一条实际指令: sub_5d2e40()
    sub_5d2e40()
    HMODULE eax = sub_5def10("DSOUND.DLL")
    data_bf7c1c = eax
    
    if (eax == 0)
        sub_5cce60("DirectSound: failed to load DSOUND.DLL")
        sub_5d2e40()
        return 0
    
    int32_t result = 1
    int32_t eax_2 = sub_5defa0(eax, "DirectSoundCreate8")
    data_bf7c20 = eax_2
    
    if (eax_2 == 0)
        result = 0
    
    int32_t eax_4 = sub_5defa0(data_bf7c1c, "DirectSoundEnumerateW")
    data_bf7c24 = eax_4
    
    if (eax_4 == 0)
        result = 0
    
    int32_t eax_5 = sub_5defa0(data_bf7c1c, "DirectSoundCaptureEnumerateW")
    data_bf7c28 = eax_5
    
    if (eax_5 == 0)
        result = 0
        sub_5cce60("DirectSound: System doesn't appear to have DX8.")
        sub_5d2e40()
    else if (result == 0)
        sub_5cce60("DirectSound: System doesn't appear to have DX8.")
        sub_5d2e40()
    
    return result
}
