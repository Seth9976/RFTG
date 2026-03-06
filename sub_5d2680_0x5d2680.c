// 函数名称: sub_5d2680
// 虚拟地址: 0x5d2680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d2680(int32_t arg1)
{
    // 第一条实际指令: uint32_t result = waveInGetNumDevs()
    uint32_t result = waveInGetNumDevs()
    uint32_t result_2 = result
    uint32_t uDeviceID = 0
    
    if (result_2 != 0)
        do
            WAVEINCAPSW pwic
            result = waveInGetDevCapsW(uDeviceID, &pwic, 0x50)
            
            if (result == 0)
                var_4c
                int32_t var_68_2 = sub_5cd1d0(&var_4c) * 2 + 2
                void* var_6c_2 = &var_4c
                result = sub_5dd160("UTF-8", "UTF-16LE")
                
                if (result != 0)
                    arg1(result)
                    uint32_t result_1 = result
                    result = sub_5d0af0()
            
            uDeviceID += 1
        while (uDeviceID u< result_2)
    
    return result
}
