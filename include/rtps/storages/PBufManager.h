//
// Created by david-murach on 6/21/25.
//

#ifndef PBUFMANAGER_H
#define PBUFMANAGER_H

namespace rtps {
    class PBufManager {
    public:
        virtual ~PBufManager() = default;

        virtual rtps::PBufWrapper* getData(Guid_t) = 0;
    };

} // namespace rtps

#endif //PBUFMANAGER_H
