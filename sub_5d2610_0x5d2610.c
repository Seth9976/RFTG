// 函数名称: sub_5d2610
// 虚拟地址: 0x5d2610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d2610(int32_t arg1)
{
    // 第一条实际指令: uint32_t result = waveOutGetNumDevs()
    uint32_t result = waveOutGetNumDevs()
    uint32_t result_2 = result
    uint32_t uDeviceID = 0
    
    if (result_2 != 0)
        do
            WAVEOUTCAPSW pwoc
            result = waveOutGetDevCapsW(uDeviceID, &pwoc, 0x54)
            
            if (result == 0)
                var_50
                int32_t var_6c_2 = sub_5cd1d0(&var_50) * 2 + 2
                void* var_70_2 = &var_50
                result = sub_5dd160("UTF-8", "UTF-16LE")
                
                if (result != 0)
                    arg1(result)
                    uint32_t result_1 = result
                    result = sub_5d0af0()
            
            uDeviceID += 1
        while (uDeviceID u< result_2)
    
    return result
}
