// 函数名称: sub_475260
// 虚拟地址: 0x475260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_475260()
{
    // 第一条实际指令: if (*(data_27e7fd0 + 0x27) == 0)
    if (*(data_27e7fd0 + 0x27) == 0)
        data_307db08 = 0
        data_307daf4 = 0
        data_307cd0c = 0
        data_307cd50 = 0
        data_307cdb8 = 0
        data_307cd38 = 0
        data_307cd14 = 0
        data_307d9c0 = 0
        data_307d978 = 0
    else if (data_30d7278 == 0)
        int32_t eax = data_30d6f38
        
        if (eax == data_307c1b8 || eax == data_307c1c0 || eax == data_307c4f8)
            data_30d6f38 = data_307c620
    else
        int32_t edx_1 = data_307c76c
        data_30d7278 = 0
        data_30d6f38 = edx_1
    
    void* result = data_27e7a40
    
    if (result != 0 && *(result + 0x2c4960) == 2)
        *(result + 0x528) = 1
    
    return result
}
