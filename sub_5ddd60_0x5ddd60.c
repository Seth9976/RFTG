// 函数名称: sub_5ddd60
// 虚拟地址: 0x5ddd60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ddd60(int32_t arg1)
{
    // 第一条实际指令: DISPLAY_DEVICEW displayDevice
    DISPLAY_DEVICEW displayDevice
    displayDevice.cb = 0x348
    int32_t i_1 = 0
    int32_t i
    
    do
        uint32_t iDevNum_2 = 0
        
        if (EnumDisplayDevicesW(nullptr, 0, &displayDevice, 0) != 0)
            BOOL j
            
            do
                j.b = displayDevice.StateFlags.b
                
                if ((j.b & 1) != 0)
                    if (i_1 != 0)
                        if ((j.b & 4) == 0)
                        label_5dddbf:
                            int32_t var_3a4_1 = 0x40
                            var_390
                            void* var_3a8_2 = &var_390
                            void device
                            void* var_3ac_1 = &device
                            sub_5cd110()
                            uint32_t iDevNum_1 = 0
                            int32_t ebx_1 = 0
                            
                            if (EnumDisplayDevicesW(&device, 0, &displayDevice, 0) == 0)
                                sub_5ddc60(&device)
                            else
                                BOOL k
                                
                                do
                                    k.b = displayDevice.StateFlags.b
                                    
                                    if ((k.b & 1) != 0)
                                        if (i_1 != 0)
                                            if ((k.b & 4) == 0)
                                                ebx_1 += sub_5ddc60(&var_390)
                                        else if ((k.b & 4) != 0)
                                            ebx_1 += sub_5ddc60(&var_390)
                                    
                                    iDevNum_1 += 1
                                    k = EnumDisplayDevicesW(&device, iDevNum_1, &displayDevice, 0)
                                while (k != 0)
                                
                                if (ebx_1 == 0)
                                    sub_5ddc60(&device)
                    else if ((j.b & 4) != 0)
                        goto label_5dddbf
                
                uint32_t iDevNum = iDevNum_2 + 1
                iDevNum_2 = iDevNum
                j = EnumDisplayDevicesW(nullptr, iDevNum, &displayDevice, 0)
            while (j != 0)
        
        i = i_1 + 1
        i_1 = i
    while (i s< 2)
    
    if (*(arg1 + 0xe8) != 0)
        return 0
    
    sub_5cce60("No displays available")
    return 0xffffffff
}
