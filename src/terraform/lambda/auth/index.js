'use strict';

const auth = require('remote.auth.json');

/* This is an origin request function */
exports.handler = (event, context, callback) => {
    const request = event.Records[0].cf.request;

    if (!request.headers['authorization'] || request.headers['authorization'][0].value !== auth.key) {
        return callback(null, {
            body: 'Unauthorized',
            bodyEncoding: 'text',
            status: '401',
            statusDescription: 'status description',
            headers: {
                'www-authenticate': [{key: 'WWW-Authenticate', value:'Basic'}]
            }
        });
    }


    return callback(null, request);
};
